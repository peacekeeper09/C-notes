#include <iostream>
using namespace std;

void checker(string& gen, bool& marriagestatus, int& child, int& appointment, int& salary, int& height, int& gpa, int& bal) {
    cout << "Hello! Welcome, we will ask you some questions, please reply appropriately!" << endl;

    cout << "Please tell us your gender: ";
    cin >> gen;

    cout << "Please tell us your marriage status (true for married, false for unmarried): ";
    cin >> boolalpha >> marriagestatus;

    if (marriagestatus) {
        cout << "How many children do you have? ";
        cin >> child;
    } else {
        cout << "I see, you are still unmarried." << endl;
    }

    cout << "Please tell us your appointment date: ";
    cin >> appointment;

    cout << "Please tell us your salary: ";
    cin >> salary;

    cout << "Please tell us your height: ";
    cin >> height;

    cout << "Please tell us your GPA: ";
    cin >> gpa;

    cout << "Please tell us your balance: ";
    cin >> bal;
}

int main() {
    string gen;
    bool marriagestatus;
    int child;
    int appointment;
    int salary;
    int height;
    int gpa;
    int bal;

    checker(gen, marriagestatus, child, appointment, salary, height, gpa, bal);
    
    cout << "Gender: " << gen << endl;
    cout << "Marriage Status: " << boolalpha << marriagestatus << endl;
    cout << "Number of Children: " << child << endl;
    cout << "Appointment Date: " << appointment << endl;
    cout << "Salary: " << salary << endl;
    cout << "Height: " << height << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Balance: " << bal << endl;

    return 0;
}
