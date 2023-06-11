#include <iostream>

using namespace std;

int main () {

    struct {
        int a =100;
        int b = 200;
    }testing;

    cout << testing.a <<endl;
    cout << testing.b <<endl;

    testing.a = 200;

    testing.b = 300;

    cout << testing.a <<endl;
    cout << testing.b << endl;
}
