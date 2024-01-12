#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[n];

    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];

        y = y - a[i] + b[i];
        x = max(x, y);
    }
    cout << x << endl;

    return 0;
}