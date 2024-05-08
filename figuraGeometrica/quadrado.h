#pragma once
#include "figuraGeometrica.h"

class Quadrado : public FiguraGeometrica {
    private:
        float lado;
    public:
        Quadrado();
        float calcularArea();
        void lerAtributosArea();
};