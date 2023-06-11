#include <iostream>

using namespace std;

int main() {

    int row;
    int column;
    int hits = 0;
    int nott = 0;

    bool ship[4][4] = {
            {0, 0, 1, 0},
            {1, 0, 1, 0},
            {1, 0, 0, 0},
            {0, 1, 0, 0}
    };

    while (hits < 5) {
        cout << "Selecting coordinates" << endl;
        nott++;

        cout << "Select a row:" << endl;
        cin >> row;

        cout << "Select a column:" << endl;
        cin >> column;

        if (ship[row][column] == 1) {
            cout << "That's a hit!" << endl;
            hits++;
            cout << "There are still " << (5 - hits) << " remaining!" << endl;
            cout << "Good luck with rest attempts!" << endl;
        }

        else
            cout << "That's a miss, nice try tho!" << endl;
    }

    cout << "Victory! You shot all the ships!" <<endl;
    cout << "You completed the game in " << nott << "attempts!" <<endl;
}
