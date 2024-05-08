#include <iostream>
using namespace std;
#include "data.h"

int main() {
    int d, m, a;
    int diasAvancar;
    
    cin >> d >> m >> a >> diasAvancar;
    
    Data data {d, m, a};

    for (int i = 0; i < diasAvancar; i++) {
        data.avancarDia();
    }

    cout << data.exibirData() << endl;

    return 0;
}
