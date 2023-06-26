#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,maximum;
    cin>>N;
    int A[N];

    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    maximum = A[0];
    for(int i=0; i<N; i++)
    {
        if(maximum< A[i])
        {
             maximum = A[i];
        }

    }
    cout<<maximum<<endl;
    return 0;
}
