#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int a, b;
        cin>> a>> b;

        if(a % b == 0)
        {
            cout<<0<<endl;
        }
        else if(a < b)
        {
            int c = b - a;
            cout<< c <<endl;
        }
        else 
        {
            int x = b - (a%b);
            cout<<x<<endl; 
        }
    }
    return 0;
}