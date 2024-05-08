#include <iostream>
using namespace std;

class Data {
    private:
        int dia;
        int mes;
        int ano;
    
    public:
        Data(int, int, int);
        void setDia(int);
        void setMes(int);
        void setAno(int);
        void avancarDia();
        int getDia() const {return dia;}
        int getMes() const {return mes;}
        int getAno() const {return ano;}
        string exibirData();
};