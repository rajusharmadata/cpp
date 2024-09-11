#include<iostream>
using namespace std;
// linera search 
int Linear_search(int arr[],int key,int length){
  for(int i= 0;i<length;i++){
    if(arr[i]==key){
        return i;
    }
  }
  return -1;
}


int main(){
    int arr[] = {10,15,13,17,18,16,20,90,40};
    int key = 10;
    int length = sizeof(arr)/sizeof(arr[0])-1;
    int ans = Linear_search(arr,key,length);
    if(ans==-1){
        cout<<"index not found because there no exit elemnt in array "<<endl;
    }else{
        cout<<"index = "<<ans<<endl;
    }
}