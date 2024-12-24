// (ii)	Inserting an element at the beginning of Array

#include <iostream>
using namespace std;

void insertAtBeginning(int arr[], int &size, int element) {
    // Shift elements to the right
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the new element at the beginning
    arr[0] = element;
    size++;  // Increase the size of the array
}

int main() {
    int size = 5;
    int arr[6] = {10, 20, 30, 40, 50}; // Original array

    int element = 5; // Element to be inserted

    insertAtBeginning(arr, size, element);

    // Print the array after insertion
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
