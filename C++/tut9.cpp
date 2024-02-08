#include <iostream>

using namespace std;

int main()
{
    // cout<<"This is tutorial 9";
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;
    // if ((age<18) && (age>0)){
    //     cout<<"You cannot come to my party"<<endl;
    // }
    // if (age<1){
    //     cout<<"You are not yet born"<<endl;
    // }
    // else if (age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else{
    //     cout<<"You will come to the party"<<endl;
    // }

    // Selection control structure: Switch case staements
    switch (age)
    {
    case 18:
        cout << "You are age 18 " << endl;
        break;
    case 22:
        cout << "You are age 22" << endl;
        break;
    case 2:
        cout << "You are age 2" << endl;
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }
    return 0;
}