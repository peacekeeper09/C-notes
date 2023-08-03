#include <iostream>
#include <vector>
using namespace std;

void recursiveBubbleSort(std::vector<int>& arr, int n) {
    if (n == 1) {
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            std::swap(arr[i], arr[i + 1]);
        }
    }

    recursiveBubbleSort(arr, n - 1);
}

int main() {
    std::vector<int> numbers = {2, 3, 6, 5, 7, 10, 11, 12, 4};
    std::cout << "Original Array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    recursiveBubbleSort(numbers, numbers.size());
    std::cout << "\nSorted Array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
