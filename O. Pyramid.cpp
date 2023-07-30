#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,row , col;
    cin>> N;
    for(row = 1; row<=N; row++)
    {
        for(col = 1; col<=row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
