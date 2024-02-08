#include <iostream>
using namespace std;

int main()
{
    int daysinmonths[4] = {28, 29, 30, 31};
    cout << "Number of days a month can have" << endl;
    // For loop
    // for (int i=0;i< 4; i++){
    //     cout<<i+1<<"."<<monthsindays[i]<<endl;
    // }
    // While loop;
    int i = 0;
    //    while (i< 4)
    //    {
    //     cout<<i+1<<"."<<daysinmonths[i]<<endl;
    //     i++;
    //       }
    int i = 0;
    do
    {
        cout << i + 1 << "." << daysinmonths[i] <<endl;
        i++;
    } while (i < 4);

    return 0;
}