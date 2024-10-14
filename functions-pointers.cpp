#include <iostream>
using namespace std;

int sumar(int primer, int segundo) {
    return primer + segundo;
}

int restar(int primer, int segundo) {
    return primer - segundo;
}

int efectuar(int (*funcion)(int x, int y)) {
    return funcion(5, 6);
}

int main(int argc, char **argv) {
    int (*funcion)(int a, int b);
    funcion = sumar;
    cout << funcion(5, 3) << endl;
    funcion = restar;
    cout << funcion(5, 3) << endl;

    cout << efectuar(sumar) << endl;
    cout << efectuar(restar) << endl;

    return 0;
}