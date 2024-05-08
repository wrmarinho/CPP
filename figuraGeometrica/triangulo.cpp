#include "triangulo.h"

Triangulo::Triangulo() : FiguraGeometrica(2) {}

float Triangulo::calcularArea(){
    return (base * altura) / 2;
}

void Triangulo::lerAtributosArea() {
    cin >> base;
    cin >> altura;
}