#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, row, col;
    cin>>N;

    for(row = 1; row<=N; row++)
    {
        for(col = 1; col<=N - row; col++)
        {
            cout<<" ";
        }
        for(col = 1; col<=2*row -1; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
