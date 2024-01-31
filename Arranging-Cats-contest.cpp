#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;
        string s1, s2;
        cin >> s1 >> s2;

        int c1 = 0, c2 = 0;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == '0' && s2[i] == '1')
            {
                c1++;
            }

            if (s1[i] == '1' && s2[i] == '0')
            {
                c2++;
            }
        }
        cout << max(c1, c2) << endl;
    }
    return 0;
}

