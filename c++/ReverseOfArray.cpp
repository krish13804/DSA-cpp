#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int left = 0, right = size - 1;

    // Swap elements using two pointers
    while (left < right) {
        // Swap the elements at left and right
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        // Move the pointers towards each other
        left++;
        right--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Example of an unsorted array
    int arr[] = {5, 2, 9, 1, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, size);

    reverseArray(arr, size);

    cout << "Reversed Array: ";
    printArray(arr, size);

    return 0;
}
