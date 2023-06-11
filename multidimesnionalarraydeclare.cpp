#include <iostream>
using namespace std;

int main() {
    string letters[3][4] = {
            { "A", "B", "C", "D" },
            { "E", "F", "G", "H" },
            {"I", "J", "K", "L"}
    };

    cout << letters[0][1] << endl;

    cout << letters [2][3] << endl;
}
