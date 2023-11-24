#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Find the maximum element without using max_element
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        c = c + max - a[i];
    }

    cout << c << endl;

    return 0;
}
