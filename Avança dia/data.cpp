#include "data.h"

int getDaysMonth(int m) {
    switch (m) {
        case 2:
            return 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

Data::Data (int d, int m, int a)  {

    if (d < 1 || d > getDaysMonth(m)) {
        cout << "Atributo dia Inválido" << endl;
        dia = 1;
    } else {
        dia = d;
    }
    
    if (m < 1 || m > 12) {
        cout << "Atributo mês Inválido" << endl;
        mes = 1;
    } else {
        mes = m;
    }
    
    ano = a;
}

void Data::setDia(int d) {
    if (d >= 1 && d <= getDaysMonth(mes)) {
        dia = d;
    } else {
        cout << "Atributo dia Inválido" << endl;
    }
}
    
void Data::setMes(int m) {
    if (m >= 1 && m <= 12) {
        mes = m;
    } else {
        cout << "Atributo mês Inválido" << endl;
    }
}
    
void Data::setAno(int a) {
    ano = a;
}

void Data::avancarDia() {
    dia++;
    if (dia > getDaysMonth(mes)) {
        dia = 1;
        mes++;
        if (mes > 12) {
            mes = 1;
            ano++;
        }
    }
}
    
string Data::exibirData() {
    string strDia = dia < 10 ? "0" + to_string(dia) : to_string(dia);
    string strMes = mes < 10 ? "0" + to_string(mes) : to_string(mes);
    return strDia + "/" + strMes + "/" + to_string(ano);
}