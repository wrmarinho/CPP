#pragma once
#include "figuraGeometrica.h"

class Triangulo : public FiguraGeometrica {
private:
    float base, altura;
public:
    Triangulo();
    float calcularArea();
    void lerAtributosArea();
};