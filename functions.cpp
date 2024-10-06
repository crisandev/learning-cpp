#include <iostream>
using namespace std;

bool esPar(int num);

int main() {
    int num = 0;
    cout << "Introduce un numero: ";
    cin >> num;
    if (esPar(num)) {
        cout << num << " Es par " << endl;
    } else {
        cout << num << " Es impar " << endl;
    }
    return 0;
}

bool esPar(int num) {
    if (num % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

