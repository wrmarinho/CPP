#include "quadrado.h"

Quadrado::Quadrado() : FiguraGeometrica(1) {}
    
float Quadrado::calcularArea() { 
    return lado * lado;
}
    
void Quadrado::lerAtributosArea(){
    cin >> lado;
}