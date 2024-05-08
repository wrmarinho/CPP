#include "figuraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(int t) {
    tipo = t;
}

float FiguraGeometrica::calcularArea(){
    return 0;
}

void FiguraGeometrica::lerAtributosArea(){
}

string FiguraGeometrica::getNome() {
    switch (tipo) {
        case 1: return "Quadrado";
        case 2: return "Triângulo";
        default: return "Indefinido";
    }
}