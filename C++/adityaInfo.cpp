#include<iostream>
using namespace std;

 struct person
{
     int birthdate;
     int month;
     int year;
};

int main(){
    struct person Aditya;
    Aditya.birthdate=6;
    Aditya.month=12;
    Aditya.year=2004;

    cout<<"Aditya's birthdate is "<<Aditya.birthdate<< "/"<<Aditya.month<<"/"<<Aditya.year<<endl;
    
    return 0;
}