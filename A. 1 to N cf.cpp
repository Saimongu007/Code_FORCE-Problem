#include<iostream>
using namespace std;
int main()
{
    int N,i;
    cin>>N;
    for(i=2;i<=N;i=i++)
    {
        if(i%2==0)
        cout<<i<<endl;
        else
            cout<<-1<<endl;

    }


}

