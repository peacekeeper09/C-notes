#include <iostream>
using namespace std;

void Test2(string fname, int age) {
    cout << "Please tell us your name: ";
    cin >> fname;
    cout << "Please tell us your age: ";
    cin >> age;
    if (age < 18) {
        cout << "Hello, " << fname << "! You are not eligible for voting." << endl;
    } else {
        cout << "Hello, " << fname << "! You are eligible for voting." << endl;
    }
}

int main() {
    string fname;
    int age;
    Test2(fname, age);
    return 0;
}
