#include<iostream>
using namespace std;

int gcd(int a, int b){
    if (a%b==0){
        return b;
    }
    else
    return gcd(b,a%b);
}
int main(){
    int a,b;
    cout<<"Enter two numbers a and b where first number must be greater ";
    cin>>a>>b;
    cout<<"G.C.D of the numbers "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
    return 0;
}