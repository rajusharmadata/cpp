#include<iostream>
using namespace std;
 class room{
    // that is show  this class is public 
    public:
    double length;
    double breadth;
    double height;
    // that is creat a function  claculate the Area 
    double calculateArea(){
        return length*breadth;
    }
    // that is creat a function  
    double calculateVolume(int length ,int breadth,int height){
    // that function pass argument and not pass the argument 
        return length*breadth*height;
    }
 };
 
    int main(){
    room room1;
    room1.length=10;
    room1.breadth=20;
    room1.height=30;

    cout<<"Volume of room is "<<room1.calculateVolume(room1.length,room1.breadth,room1.height)<<endl;
    cout<<"Area of Room = " << room1.calculateArea()<<endl;
    
    return 0;
 }
 