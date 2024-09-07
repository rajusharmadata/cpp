#include <iostream>
using namespace std;
// beg  = starting index  in array
// end = ending index in array 
// without using function
// int main()
// {
//     int arr[]  = {1,2,3,4,5,6,7,8,9,10};
//     int key = 5;
//     int beg = 0;
//     int end = 9;
//     int mid = (beg+end)/2;
//     while(beg<=end && arr[mid]!=key)
//     {
//         if(key>arr[mid])
//         {
//             beg = mid+1;
//         }
//         else
//         {
//             end = mid-1;
//         }

//         mid = (beg+end)/2;
//     }
//     if(arr[mid]==key)
//     {
//         cout<<"index is : =  "<< mid;
//     }else{
//         cout<<"not found";

//     }
// }

// using function
int binarysearch(int arr[], int size, int key)
{
    int beg = 0;
    int end = size - 1;

    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {11, 22, 30, 40, 44, 55, 60, 66, 77, 80, 88, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 40;
    int index = binarysearch(arr, size, key);
    if (index == -1)
    {
        cout << "This element  not exist in array " << endl;
    }
    else
    {
        cout << "This element is found at index : " << index << endl;
    }
}
