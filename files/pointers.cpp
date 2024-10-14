#include <iostream>
using namespace std;

int main(){
    int x = 34;
    int *y = &x;

    cout << x << endl;
    cout << *y << endl;
    cout << y << endl;
    return 0;
}