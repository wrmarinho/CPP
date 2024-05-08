#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void hanoi(int qtd, int orig, int aux, int dest){
    
    if(qtd == 1){
        cout << "Mover de "<< orig << "p/" <<dest << endl;
    }
    else{
        hanoi(qtd-1, orig, dest, aux);
        cout << "Mover de "<< orig << "p/" <<dest << endl;
        hanoi(qtd-1, aux, orig, dest);
        getchar();
    }
}

int main(){
    
    cout << "Numero de peças: ";
    int pecas;
    cin >> pecas;
    hanoi(pecas,1,2,3);

    return 0;
}
