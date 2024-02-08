// Function Overloading with Examples in C++
#include<iostream>
using namespace std;
int sum(float a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

// Calculate the volume of cylinder
int volume(float r, int h){
    return (3./14 *r*r*h);
}

// Calculate the vloume of cube
int volume(int a){
    return (a*a*a);
    }

// Calculate the volume of cuboid
int volume(int l,int b,int h){
    return (l*b*h);
}

int sum(int a,int b,int c){
    cout<<"Using function wuth 3 arguments"<<endl;
    return a+b+c;
}
int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3,7 and 6 is "<<sum(3,7,7)<<endl;
    cout<<"Volume of cylinder having radius 3 and height 6 is "<<volume(3,6)<<endl;
    cout<<"The volume of cube having edge 3 is "<<volume(3)<<endl;
    cout<<"The volume of cuboid having length,breadth and height as 3,7 and 6 respectively is "<<volume(3,7,6)<<endl;

    return 0;
}