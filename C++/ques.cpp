// print factorial of n

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long ans = 1;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    cout << "Factorial of " << n << " is: " << ans;
    return 0;
}
