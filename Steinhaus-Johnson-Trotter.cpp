#include <iostream>
#include <vector>
#include <algorithm>

int minStepsToMatch(std::vector<int>& arr1, const std::vector<int>& arr2) {
    int n = arr1.size();
    int match_length = 0;

    // Find the length of the matching prefix
    while (match_length < n && arr1[match_length] == arr2[match_length]) {
        match_length++;
    }

    // The number of steps is simply the number of non-matching elements to be rearranged
    return n - match_length - 1;
}

int main() {
    int n;

    // User input for the size of arrays
    std::cout << "Enter the number of elements in the arrays: ";
    std::cin >> n;

    std::vector<int> arr1(n), arr2(n);

    // Input elements for the first array
    std::cout << "Enter elements of the first array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr1[i];
    }

    // Input elements for the second array
    std::cout << "Enter elements of the second array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr2[i];
    }

    // Calculate the minimum number of steps
    int steps = minStepsToMatch(arr1, arr2);

    // Output the result
    std::cout << "Minimum steps to match the arrays: " << steps << std::endl;

    return 0;
}
