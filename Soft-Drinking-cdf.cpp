#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int x = (k * l) / nl;
    int y = p / np;

    int z = min(x, min(y, (c * d)));
    int a = z / n;

    cout << a << endl;

    return 0;
}