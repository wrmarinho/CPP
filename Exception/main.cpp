#include <string>
#include <iostream>
#include <exception>
using namespace std;

void lavarRoupa() {
    bool condicao = true;
    if (condicao)
        throw new overflow_error(" roupa muito suja\n");
    cout << "saindo do lavar roupa\n";
}

void lavarRoupa2() {
    bool condicao = true;
    if (condicao)
        throw new underflow_error(" 2roupa muito rasgada\n");
    cout << "2saindo do lavar roupa\n";
}

void foo() {
    lavarRoupa(); // lança a exceção overflow_error
    cout << "lavei a roupa com sucesso\n";
    cout << "saindo do foo\n";
}

void foo2() {
    lavarRoupa2(); // lança a exceção undeflow error
    cout << "2lavei a roupa com sucesso\n";
    cout << "2saindo do foo\n";
}

int main(){
    
    try {
        foo();
        cout << "depois do foo()\n";
    } catch (overflow_error *ex) {
        cout << "roupa suja no main:" << ex->what() << endl;
    }
    try {
        foo2();
        cout << "depois do foo()\n";
    } catch (underflow_error *ex) {
        cout << "roupa rasgada no main:" << ex->what() << endl;
    }

    cout << "saindo do main\n";
    return 0;
}







int main123() {
    bool condicao = true;
    try {
        overflow_error *ex = new overflow_error("testando");
        if (condicao)
            throw ex;
    }
    catch (int e) {
        cout << " exception int: " << e << endl;
    }
    catch (exception *e) {
        cout << " exception exception: " << e->what() << endl;
    }

    cout << "saindo do programa educadamente\n";
    return 0;
}
