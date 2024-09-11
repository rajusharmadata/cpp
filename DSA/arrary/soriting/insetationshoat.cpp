#include <bits/stdc++.h>
using namespace std;

void insertElement(int arr[], int addItem, int index, int length) {
    for (int i = length - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = addItem;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8}; // Adjust size to 9 for inserting one element
    int addItem = 5;
    int index = 4;
    int length = sizeof(arr) / sizeof(arr[0]) + 1;

    insertElement(arr, addItem, index, length);

    for (int i = 0; i < length ; i++) { // Print up to the new length
        cout << arr[i] << " ";
    }

    return 0;
}
