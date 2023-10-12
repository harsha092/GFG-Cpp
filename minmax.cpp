#include <iostream>
using namespace std;



struct MinMax {
    int min_val;
    int max_val;
};


MinMax findMinMaxRecursive(int arr[], int low, int high) {
    MinMax result;
    if (low == high) {
        result.min_val = arr[low];
        result.max_val = arr[low];
        return result;
    }
    if (high==1+low) {
        result.min_val = min(arr[low], arr[high]);
        result.max_val = max(arr[low], arr[high]);
        return result;
    }

    // Divide the array into two halves
    int mid = (low + high) / 2;
    MinMax left = findMinMaxRecursive(arr, low, mid);
    MinMax right = findMinMaxRecursive(arr, mid + 1, high);

    // Combine the results from the left and right halves
    result.min_val = min(left.min_val, right.min_val);
    result.max_val = max(left.max_val, right.max_val);

    return result;
}
int main() {
    int arr[] = {61,95,2,12,22,11,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    MinMax Result = findMinMaxRecursive(arr, 0, n - 1);
    
    cout << " Minimum value: " << Result.min_val << ", Maximum value: " <<Result.max_val <<endl;

    return 0;
}
