#include<iostream>
using namespace std;

inline int product(int a,int b){
    // Not recommended to use below lines with inline functions   
    // static int c=0; //This executes only once
    // c=c+1; // Next time this function is run, the value of c will be retained  
    return a*b;
}
// int strlen(const char *p){
// }
float moneyReceived(int currentMoney, float factor =1.04){
    return currentMoney*factor;
}

int main(){
    // int a, b;
    // cout<<"Enter the value of a and b is "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int Money;
    cout<<"Enter the amount ";
    cin>>Money;
    cout<<"If you have "<<Money<<" amount of money, then you will receive "<<moneyReceived(Money)<<endl;
    cout<<"If you are VIP then you will receive "<<moneyReceived(Money, 1.1)<<endl;
    return 0;
}