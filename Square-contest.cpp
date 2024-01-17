#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> x(4), y(4);

        for (int i = 0; i < 4; i++)
        {
            cin >> x[i] >> y[i];
        }

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        int s = max(x[2] - x[1], y[2] - y[1]);
        int r = s * s;

        cout << r << endl;
    }
    return 0;
}