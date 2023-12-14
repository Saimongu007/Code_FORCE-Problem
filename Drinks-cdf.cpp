#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        sum = sum + a[i];
    }
    double average = (double)sum / n;

    cout << average << endl;
    // cout<<fixed<<setprecision(12)<<average<<endl;
    return 0;
}