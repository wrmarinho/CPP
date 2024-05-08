#include "pessoa.h"
#include "aluno.h"
#include "professor.h"
#include <iostream>

using namespace std;

int main(){
    
    Pessoa p1 {"Wilton", "Paraíba"};
    p1.display();
    
    cout << endl;
    
    Aluno a1 {"Pedro", "Paraiba", "ECO", 12345};
    a1.display();
    
    cout << endl;
    
    Professor pr1{"José", "São Paulo", 678909, 3, "ICA"};
    pr1.display();
    
    cout << endl;
    
    Pessoa *p = new Aluno("Wilton", "Teste1", "Teste2", 3);
    p->display();
    
return 0;
}