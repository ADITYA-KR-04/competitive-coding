#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << "odd";
    }
    else
    {
        cout << "even";
    }

    return 0;
}