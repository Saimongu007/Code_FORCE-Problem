#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testc;
    cin >> testc;

    while (testc--)
    {
        int a, b;
        cin >> a >> b;

        for (int i = 1; i <= b; i++)
            cout << i << " ";
        int c = a;
        for (int i = b + 1; i <= a; i++)
            cout << (c--) << " ";
        cout << endl;
    }
    return 0;
}
