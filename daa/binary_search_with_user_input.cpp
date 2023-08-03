#include <iostream>
#include <vector>
using namespace std;

int bs(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    char choice;
    do {
        vector<int> sorted_array;
        int size, target_element;
        cout << "Enter the size of the sorted array: ";
        cin >> size;
        cout << "Enter the elements of the sorted array: ";
        for (int i = 0; i < size; ++i) {
            int num;
            cin >> num;
            sorted_array.push_back(num);
        }
        cout << "Enter the target element to search for: ";
        cin >> target_element;
        int result = bs(sorted_array, target_element);
        if (result != -1) {
            cout << "Element " << target_element << " found at index " << result << "." << endl;
        } else {
            cout << "Element " << target_element << " not found in the array." << endl;
        }
        cout << "Do you want to continue searching? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
