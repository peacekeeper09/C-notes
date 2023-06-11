
#include <iostream>

using namespace std;

int main() {
    string food = "Fish";
    string &meal = food;

    cout << "Value stored in variable food is " <<food << endl;
    cout << "Value stored in reference of food is " << meal;
}
