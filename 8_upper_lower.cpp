#include <iostream>

using namespace std;

int main()
{
    char a;
    cin >> a;
    int ascii = a;
    if (ascii >= 65 && ascii <= 90)
    {
        cout << "Upper Case\n";
    }
    else if (ascii >= 97 && ascii <= 122)
    {
        cout << "Lower Case\n";
    }
    else
    {
        cout << "Invalid Character\n";
    }
    return 0;
}