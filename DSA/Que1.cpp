#include<iostream>
using namespace std;
// binary search

int binary_search(int arr[],int key,int length){
    int first = 0;
    while(first<=length){
        int mid = (first+length)/2;
        if (arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
        first = mid +1;

        }else{
            length = mid -1;
        }
    }
    return -1;
    
} 

int main(){
    int arr[]= {4,5,10,15,20,25,30,35,40,45,50,98};
    int length = sizeof(arr) / sizeof(arr[0])-1;
    int key = 40;
    int ans = binary_search(arr,key,length);
    
    if (ans == -1){
        cout<<"not found index because this element not exits in array "<<endl;

    }else{
        cout<<"index = "<<ans;
    }
    cout<<endl;

    return 0;
}