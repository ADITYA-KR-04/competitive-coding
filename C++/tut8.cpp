#include<iostream>
#include<iomanip>
using namespace std;

int main(){
// const int a=34;
// cout<<"The value of a was: "<<a<<endl;
// a=45;//You will get an error because a is an constant
// cout<<"The value of a is: "<<a;
// COnstants in C++

// int a=3,b=78,c=1233;
// cout<<"The value of a is: "<<setw(4)<<a<<endl;
// cout<<"The value of b is: "<<setw(4)<<b<<endl;
// cout<<"The value of c is: "<<setw(4)<<c<<endl;

// Operator Precedence
int a=3, b=4;
// int c = (a*5)+b
int c=((((a*5)+b)-45)+87);
cout <<c;
    return 0;
}