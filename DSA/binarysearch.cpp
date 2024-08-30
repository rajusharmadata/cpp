#include<bits/stdc++.h>
#include <array>
using namespace std; 

int binarysearch(int arr[],int key){
   int start = 0; 
   int last = 10;
   int mid = (start+last)/2;
   while(start<= last){
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<=last){
        start = mid+1;
    }else{
        last = mid -1;
    }
   }
}

int main(){
    int arr[] = {4,5,6,8,10,12,14,20,25,40};
    int key = 14;
    cout<<binarysearch(arr,key);
}