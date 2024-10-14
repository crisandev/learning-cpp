#include <iostream>
using namespace std;

void imprimirValores(int *valores, int cantidad) {

    for (int i = 0; i < cantidad; i++) {
        cout << *valores << endl;
        valores++;
    }
}

int main() {
    int valores[4] = { 23, 34, 45, 56 };
    int *puntero = valores;

    cout << *puntero << endl;
    imprimirValores(puntero, 4);

    return 0;
}