#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;

        if (a <= 2)
        {
            cout << 0 << endl;
        }
        else if (a % 2 == 0)
        {
            int b = (a / 2) - 1;
            cout << b << endl;
        }
        else
        {
            int c = a / 2;
            cout << c << endl;
        }
    }
    return 0;
}