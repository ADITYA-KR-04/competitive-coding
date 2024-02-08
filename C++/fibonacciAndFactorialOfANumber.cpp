// Recursions
#include<iostream>
using namespace std;

int fibonaci(int n){
    if(n<2){
        return 1;
    }
    return fibonaci(n-1)+fibonaci(n-2);
}
int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;
    cout<<"The "<<n<<" term of Fibonacci sequence is "<<fibonaci(n);
        return 0;
}