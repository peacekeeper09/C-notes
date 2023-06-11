#include <iostream>

using namespace std;

int main() {
    string food = "Tofu";
  // creating pointer with name okay
    string* okay = &food;

    cout << food << "\n";

    cout << &food << endl;

    cout << okay << endl; 

}
