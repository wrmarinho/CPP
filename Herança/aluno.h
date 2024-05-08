#pragma once
#include "pessoa.h"

class Aluno : public Pessoa {
    private:
        string curso;
        int matricula;
    public:
        Aluno();
        Aluno(string n, string e, string c, int m) : Pessoa {n, e} {
            curso = c;
            matricula = m;
        }
        void setCurso(string c){
            curso = c;
        }
        void display() override{
            Pessoa::display();
            cout << "Curso: " << curso << endl;
            cout << "Matrícula: " << matricula << endl;
        }
};