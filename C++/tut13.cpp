#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {23, 45, 56, 89};
    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    int mathsmarks[4] = {11, 13, 14, 12};
     cout << "These are maths marks " << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout<<i<<"."<< mathsmarks[i] << endl;
    }
//    Pointers and arrays
int* p= marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
    

    return 0;
}