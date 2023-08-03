#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]){
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
int main() {
    std::vector<int> numbers = {2, 3, 6, 5, 7, 10, 11, 12, 4};
    std::cout << "Original Array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    bubbleSort(numbers);
    std::cout << "\nSorted Array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
