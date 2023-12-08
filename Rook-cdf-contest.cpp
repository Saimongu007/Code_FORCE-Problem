#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        string s;
        cin>> s;
        
        char colum = s[0];
        char row = s[1];

        for (char ch = 'a'; ch <= 'h'; ch++)
        {
            if (ch != colum)
            {
                cout << ch << row << endl;
            }
        }

        for (char r = '1'; r <= '8'; r++)
        {
            if (r != row)
            {
                cout << colum << r << endl;
            }
        }
    }
    return 0;
}
