#include<iostream>
using namespace std;
int binarySearch(int arr[],int key,int size){
    int start = 0;
    int end = size;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid]<key){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
    return -1;
 }
int main(){
    int size,key;
    cout<<"Enter the size of arraay "<<endl;
    cin >>size;
    
    int arr [size];
      cout<<"Enter the array "<<endl;
      for(int i = 0;i<size;i++){
        cin>>arr[i];

      }
      cout<<"Enter the key "<<endl;
      cin>>key;
     if( binarySearch(arr,key,size) == -1){
        cout<<"not found index , This element not exist in arrary "<<endl;
     }else{
        cout<<"index is "<<  binarySearch(arr,key,size);
     }

}