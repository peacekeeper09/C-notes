#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    a = 10;
    b = 20;
    swap(a, b);
    cout << "new value of a and b are " << a << ", " << b << endl;
}
