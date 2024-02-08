#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}
// This will not swap a and b
void swap(int a,int b){   //temp  a   b
    int temp=a;           //4     4   5
    a=b;                  //4     5   5
    b=temp;               //4     5   4
}
// Call by Reference using Pointers
void swapPointer(int* a,int* b){   //temp  a   b
    int temp= *a;           //4     4   5
    *a=*b;                  //4     5   5
    *b=temp;               //4     5   4
}
// Call by Reference using C++ variables
int & swapReferenceVar(int &a,int &b){   //temp  a   b
    int temp=a;           //4     4   5
    a=b;                  //4     5   5
    b=temp;               //4     5   4
    return a;
}
int main(){
    int x=4,y=5;
    // This will not swap
    // swap(x,y);
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // This will swap using reference variables
    // swapPointer(&x, &y);
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapReferenceVar(x, y)=766;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0;
}