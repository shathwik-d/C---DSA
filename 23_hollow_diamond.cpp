#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        if (i == 1)
        {
            cout << "*";
        }
        else
        {
            cout << "*";
            for (int j = 1; j <= (i - 1); j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= (i - 2); j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        if (i == 1)
        {
            cout << "*";
        }
        else
        {
            cout << "*";
            for (int j = 1; j <= (i - 1); j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= (i - 2); j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}