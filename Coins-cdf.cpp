#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    if (s % n != 0)
    {
        int a = s / n;
        cout << a + 1 << endl;
    }
    else
    {
        int a = s / n;
        cout << a << endl;
    }
    return 0;
}