#include <iostream>

using namespace std;

int main()
{
    int n = 3, k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ++k;
        }
        cout << endl;
    }
    return 0;
}