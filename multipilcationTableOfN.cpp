#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your number" << endl;
    cin >> n;
    int i = 1;
    do
    {
        cout << n << " X " << i << " = "
             << (n * i) << endl;
        i++;
    } while (i <= 10);

    return 0;
}