#pragma once
#include <iostream>
using namespace std;

class Pessoa {
    protected:
        string nome;
        string endereco;
       
    public:
        Pessoa();
        ~Pessoa(){};
        Pessoa(string n, string e) {
            nome = n;
            endereco = e;
        }
        void setEndereco(string e) {
            endereco = e;
        }
        void virtual display(){
            cout << "Nome: " << nome << endl;
            cout << "Endereco: " << endereco << endl;
        }
};