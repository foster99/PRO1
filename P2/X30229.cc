#include <iostream>
using namespace std;

int  main() {
    int impares, pares, ahorros;
    cin >>impares >>pares >>ahorros;
    int gasto, semana=1, saldo=ahorros;
    while (cin >>gasto) {
        if ((semana%2)!=0) saldo=saldo-gasto+impares;
        else saldo=saldo-gasto+pares;
        cout <<saldo <<endl;
        ++semana;
    }
}