#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int minOfTwo(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    return a;
}

int sumFrom1ToN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int sumOFDigits(int n)
{
    int sum = 0, lastNum;
    while (n != 0)
    {
        lastNum = n % 10;
        n /= 10;
        sum += lastNum;
    }
    return sum;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    cout << minOfTwo(5, 4) << endl;
    cout << sumFrom1ToN(4) << endl;
    cout << fact(5) << endl;
    cout << sumOFDigits(123) << endl;
    cout << nCr(8, 2) << endl;
    return 0;
}