#include<iostream>
using namespace std;

struct person
{
     int birthdate;
     char month;
     int year;
};

int main(){
    struct person Aditya;
    Aditya.birthdate=6;
    Aditya.month='d';
    Aditya.year=2004;

    cout<<"Aditya's birthdate is "<<Aditya.birthdate<<Aditya.month<<Aditya.year<<endl;
    
    return 0;
}