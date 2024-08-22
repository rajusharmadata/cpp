#include<iostream>
using namespace std;

void bubbleSort(int arr[], int length) {
    for(int i = 0; i < length - 1; i++) {
        for(int j = 0; j < length - i ; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {4, 5, 15, 6, 9, 75, 33,857,1,2,744};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sort, array: " << endl;
    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, length);

    cout << "After sorted array: " << endl;
    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
