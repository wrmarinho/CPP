#include <iostream>
#include "figuraGeometrica.h"
#include "triangulo.h"
#include "quadrado.h"

using namespace std;

int main() {
    int tipo;
    FiguraGeometrica *figura;

    do {
        cin >> tipo;

        switch (tipo) {
            case 1:
                figura = new Quadrado();
                break;
            case 2:
                figura = new Triangulo();
                break;
            default:
                continue;
        }

        if (tipo != 0) {
            figura->lerAtributosArea();
            cout << figura->getNome() << " polimórfico de área " << figura->calcularArea() << endl;
            delete figura;
        }

    } while (tipo != 0);

    return 0;
}