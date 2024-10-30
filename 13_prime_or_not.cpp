#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, k = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            k++;
        }
    }
    if (k == 2)
    {
        cout << "Prime\n";
    }
    else
    {
        cout << "Not a prime\n";
    }
    return 0;
}