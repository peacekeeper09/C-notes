#include <iostream>
using namespace  std;

int main() {
    string a;
    cout << "Enter a string whose length you wanna know" << endl;
    cin >> a;
    int b = a.length();
    int c = a.size();
    cout << "The size of the provided string is" <<c <<endl;
    cout << "The length of the provided string is " <<b << endl;
    return 0;
}
