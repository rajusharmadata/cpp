#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    int n = arr[4];
    int j = n-1;
    int index = 2;
    while(j>=index){
        arr[j+1] = arr[j];
        j--;
    }
    int addItem = 10;
    n++;
    cout<<arr[4]<<endl;

}