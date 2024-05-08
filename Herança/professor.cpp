#include "professor.h"

Professor::Professor(string n, string e, int s, int c, string i) : Pessoa{n, e} {
    siape = s;
    categoria = c;
    instituto = i;
}
Professor::~Professor(){}

void Professor::display(){
    Pessoa::display();
    cout << "Siape: " << siape << endl;
    cout << "Categoria: " << categoria << endl;
    cout << "Instituto: " << instituto << endl;
}