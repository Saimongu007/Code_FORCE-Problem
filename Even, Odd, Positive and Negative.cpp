#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,even=0,odd = 0,positive = 0,negative = 0;
    cin>>N;
    int A[N];

    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    for(int i =0; i<N; i++)
    {
        if(A[i]%2 ==0)
        {
            even ++;
        }
        else if(A[i]%2 !=0)
        {
            odd++;
        }
    }
    for(int i =0; i<N; i++)
    {
        if(A[i]>0)
        {
            positive ++;
        }
        else if(A[i]<0)
        {
            negative++;
        }
    }
    cout<<"Even"<<": "<< even<<endl;
    cout<<"Odd"<<": "<< odd<<endl;
    cout<<"Positive"<<": "<< positive<<endl;
    cout<<"Negative"<<": "<< negative<<endl;
    return 0;
}
