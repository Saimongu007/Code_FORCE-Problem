#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int h = 0;
    int c = 0;
    while (c <= n)
    {
        h++;
        c = c + h * (h + 1) / 2;
    }

    // Since we are incrementing h before checking the condition, decrement h by 1
    h--;

    cout << h << endl;

    return 0;
}
