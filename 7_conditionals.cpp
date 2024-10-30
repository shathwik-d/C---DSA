#include <iostream>

using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // if (n >= 0)
    // {
    //     cout << "+ve\n";
    //     if (n % 2 == 0)
    //     {
    //         cout << "Even number\n";
    //     }
    //     else
    //     {
    //         cout << "Odd number\n";
    //     }
    // }
    // else
    // {
    //     cout << "-ve\n";
    // }
    int marks;
    cin >> marks;
    if (marks >= 90)
    {
        cout << 'A' << endl;
    }
    else if (marks < 90 && marks >= 80)
    {
        cout << 'B' << endl;
    }
    else
    {
        cout << 'C' << endl;
    }
    return 0;
}