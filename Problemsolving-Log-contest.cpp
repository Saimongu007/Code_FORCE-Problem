#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int c = 0;
        vector<int> a(26, 0);
        for (int i = 0; i < 26; i++)
        {
            a[i] = i + 1;
        }
        for (char l : s)
        {
            a[l - 'A']--;
            if (a[l - 'A'] == 0)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}
