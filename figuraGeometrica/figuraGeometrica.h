#pragma once
#include <iostream>
#include <string>
using namespace std;

class FiguraGeometrica {
protected:
    int tipo;
public:
    FiguraGeometrica(int);
    virtual float calcularArea();
    virtual void lerAtributosArea();
    string getNome();
};