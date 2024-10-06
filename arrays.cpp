#include <iostream>
using namespace std;

void vectores();
void matrices();

int main() {
    // vectores();
    matrices();
    return 0;
}

void vectores() {
    int edades[4] = { 21, 32, 12, 2 };
    int edades2[] = { 21, 32, 12, 2, 2, 3, 54, 23 };
    int size = sizeof(edades) / sizeof(int);
    cout << sizeof(edades) << endl;
    for (int i = 0; i < size; i++) {
        cout << "La edad es: " << edades[i] << endl;
    }
}

void matrices() {
    string hijos[3][2] = { { "Miguel", "Maria" },
                           { "Paula", "Marcos" },
                           { "Ezel", "Juan" } };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << hijos[i][j] << "\t";
        }
        cout << endl;
    }
}