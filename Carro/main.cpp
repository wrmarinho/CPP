#include <iostream>
#include "carro.h"

using namespace std;

int main(){

    float acelerar, frear;

    //Veiculo *veiculo1 = new Veiculo();
    Carro celta;// = Carro();
    
    cout << "Velocidade inicial: " << celta.velocidade << endl << endl;
    
    //cout << "Cor do veiculo 1: ";
    //getline(cin, veiculo1->cor);
    //system("clear");

    //cout << "Ano de fabricacao do veiculo 1: ";
    //cin >> veiculo1->anoFabricacao;
    //system("clear");
    
    
    
    //veiculo1->setAcelerar(acelerar);
   // veiculo1->setFrear(frear);

    //system("clear");

    //cout << "Cor: "<< veiculo1->cor << endl;
    //cout << "Ano de fabricacao: " << veiculo1->anoFabricacao << endl;
    //cout << "Velocidade: " << veiculo1->getVelocidade() << "Km" << endl;
    
    //cout << endl;

    cout << "Cor do celta: ";
    getline(cin, celta.cor);
    system("clear");
    
    cout << "Ano de fabricacao do Celta: ";
    cin >> celta.anoFabricacao;
    system("clear");
    
    cout << "Acelerar em: ";
    cin >> acelerar;
    system("clear");

    cout << "Frear em: ";
    cin >> frear;
    system("clear");
    
    celta.setAcelerar(acelerar);
    celta.setFrear(frear);
    
    cout << "Cor: " << celta.cor << endl;
    cout << "Ano de Fabricacao: " << celta.anoFabricacao << endl;
    cout << "Velocidade final: " << celta.getVelocidade() << "Km" << endl;

    cout << endl;

return 0;
}