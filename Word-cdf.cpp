#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;
    int count1 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
        else
        {
            count1++;
        }
    }
    if (count > count1)
    {
        for (int i = 0; i <= s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i <= s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}