#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int a,b,c;
        cin>> a >> b>> c;

        int count_ = 0;
        int maxnum = max( a, b);
        int minnum = min(a, b);

        if(a == b)
        {
            cout<< 0 << endl;
        }
        else
        {
            while(maxnum > minnum )
            {
                maxnum = maxnum -c ;
                minnum = minnum  + c;
                count_++;
            }
            cout << count_ <<endl;
        }
    }
    return 0;
}
