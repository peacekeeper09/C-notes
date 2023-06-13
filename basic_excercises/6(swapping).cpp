#include <iostream>

using namespace std;

int logic(int one, int two, int temp) {
    cout << "Input 1st number: " << endl;
    cin >> one;

    cout << "Input 2nd number: " <<endl;
    cin >> two;

    temp = one;
    one = two;
    two = temp;

    cout << "By swapping values, we get value of first input as " << one <<endl;
    cout << "By swapping values, we get value of second input as " <<two <<endl;
}

int main() {
    int one;
    int two;
    int temp;
    logic(one, two, temp);
}
