#include<iostream>
using namespace std;

void arrayoperation(int arr[],int n,int postion,int addElement){
for(int i = n-1;i>=postion;i--){
    arr[i+1]=arr[i];
    
}
arr[postion]=addElement;
}
int main(){
int arr[20]={4,5,6,7,8,9};
int n = 5;
int postion = 4;
int addElement = 30;
cout<<"before adding element "<<endl;

for(int i=0; i<=n;i++){
    cout<<arr[i]<<"  ";
}
cout<<endl;
arrayoperation(arr,n,postion,addElement);

cout<<"after adding element"<<endl;
n++;

for(int i=0; i<=n;i++){
    cout<<arr[i]<<"  ";
}
}