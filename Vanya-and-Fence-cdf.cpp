#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int a[n];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] > h)
        {
            x = x + 2;
        }
        else
        {
            x = x + 1;
        }
    }
    cout<< x <<endl;

    return 0;
}