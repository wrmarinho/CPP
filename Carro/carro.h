#include <string>

class Carro {
    public:
        std::string cor;
        std::string modelo;
        int anoFabricacao;
        float velocidade;

        Carro();
        void setAcelerar(float aumVel);
        void setFrear(float dimVel);
        float getVelocidade();
};