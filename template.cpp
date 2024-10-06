#include <iostream>
using namespace std;

template <typename X>
X sum(X a, X b) {
    return a + b;
}

int main() {
    int a = 4, b = 5;
    float c = 43.1, d = 1.5;

    cout << sum(a, b) << endl;
    cout << sum(c, d) << endl;

    return 0;
}