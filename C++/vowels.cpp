//input will be a character you have to tell that character is vowel or not

#include <iostream>
using namespace std;

int main()
{
    char c;

    cout << "Enter an alphabet" << endl;
    cin >> c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        cout << "vowel";
    }
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << "vowel";
    }
    else
    {
        cout << "consonant";
    }

    return 0;
}