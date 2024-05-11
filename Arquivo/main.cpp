#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Pessoa {
protected:
    string nome;
    int idade;
public:
    Pessoa(const string& _nome, int _idade) : nome(_nome), idade(_idade) {
    }
    virtual ~Pessoa() {
    }
    virtual void exibir() const {
        cout << "Nome: " << nome << ", Idade: " << idade;
    }
    string getNome() const { 
        return nome; 
    }
};

class Cliente : public Pessoa {
private:
    string endereco;
    static const string arquivo;
public:
    Cliente(const string& _nome, int _idade, const string& _endereco) : Pessoa(_nome, _idade), endereco(_endereco) {
    }

    ~Cliente(){}

    void exibir() const override {
        Pessoa::exibir();
        cout << ", Endereco: " << endereco << endl;
    }

    void salvar() const {
        ofstream arquivoSaida(arquivo, ios::app); // ios::app para adicionar ao final do arquivo
        if (arquivoSaida.is_open()) {
            arquivoSaida << nome << " " << idade << " " << endereco << endl;
            arquivoSaida.close();
        } else {
            cout << "Erro ao abrir arquivo para escrita\n";
        }
    }

    static vector<Cliente> lerClientes() {
        vector<Cliente> clientes;
        ifstream arquivoEntrada(arquivo);
        if (arquivoEntrada.is_open()) {
            string nome;
            int idade;
            string endereco;
            while (arquivoEntrada >> nome >> idade >> endereco) {
                clientes.push_back(Cliente(nome, idade, endereco));
            }
            arquivoEntrada.close();
        } else {
            cout << "Erro ao abrir arquivo para leitura\n";
        }
        return clientes;
    }

    static void alterarCliente(const string& nomeAntigo, const string& novoNome, int novaIdade, const string& novoEndereco) {
        vector<Cliente> clientes = lerClientes();
        for (Cliente& cliente : clientes) {
            if (cliente.getNome() == nomeAntigo) {
                cliente.nome = novoNome;
                cliente.idade = novaIdade;
                cliente.endereco = novoEndereco;
                break;
            }
        }
        atualizarArquivo(clientes);
    }

    static void excluirCliente(const string& nome) {
        vector<Cliente> clientes = lerClientes();
        for (auto it = clientes.begin(); it != clientes.end(); ++it) {
            if (it->getNome() == nome) {
                clientes.erase(it);
                break;
            }
        }
        atualizarArquivo(clientes);
    }

private:
    static void atualizarArquivo(const vector<Cliente>& clientes) {
        ofstream arquivoSaida(arquivo);
        if (arquivoSaida.is_open()) {
            for (const Cliente& cliente : clientes) {
                arquivoSaida << cliente.nome << " " << cliente.idade << " " << cliente.endereco << endl;
            }
            arquivoSaida.close();
        } else {
            cout << "Erro ao abrir arquivo para escrita\n";
        }
    }
};

const string Cliente::arquivo = "cliente.txt";

int main(){
    
    
    
    vector<Cliente> clientes = Cliente::lerClientes();
    
    int opcao;
    do{
        
        cout << "Digite a opção: ";
        cin >> opcao;
        cin.ignore();
        
        switch(opcao){
            case 1:{
                //Criação de um cliente
                string nome;
                int idade;
                string endereco;
                
                cout << "Nome: ";
                cin >> nome;
                cout << "Número: ";
                cin >> idade;
                cout << "Rua: ";
                cin >> endereco;
                clientes.push_back(Cliente(nome, idade, endereco));
                Cliente cli1(nome, idade, endereco);
                cli1.salvar();
                break;
            }
            case 2:{
                //Alterar informações de um cliente
                string nomeAntigo;
                string novoNome;
                int novaIdade;
                string novoEndereco;
                
                cout << "Nome a ser alterado: ";
                cin >> nomeAntigo;
                
                cout << "Digite o novo nome, idade e endereço: ";
                cin >> novoNome >> novaIdade >> novoEndereco;
                
                Cliente::alterarCliente(nomeAntigo, novoNome, novaIdade, novoEndereco);
                // Ler e imprimir informações dos clientes do arquivo após alteração e exclusão
                clientes = Cliente::lerClientes();
                cout << "Clientes após alteração e exclusão:" << endl;
                for (const Cliente& cliente : clientes) {
                    cliente.exibir();
                }
                break;
            }
            case 3:{
                // Excluir um cliente
                Cliente::excluirCliente("E");
                // Ler e imprimir informações dos clientes do arquivo após alteração e exclusão
                clientes = Cliente::lerClientes();
                cout << "Clientes após alteração e exclusão:" << endl;
                for (const Cliente& cliente : clientes) {
                    cliente.exibir();
                }
                break;
            }
            case 4:{
                 // Ler e imprimir informações dos clientes do arquivo
                //vector<Cliente> clientes = Cliente::lerClientes();
                for (const Cliente& cliente : clientes) {
                    cliente.exibir();
                }
                break;
            }
            default:{
                cout << "Opção invalida." << endl;
            }
        }
    }while(opcao != 0);


    return 0;
}
