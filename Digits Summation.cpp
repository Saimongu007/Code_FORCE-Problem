#include<iostream>
using namespace std;
int main()
{
    long long N,M;
    cin>>N>>M;

    long long lastN = N%10;
    long long lastM = M%10;
    int sum = lastN + lastM;

    cout<<sum;
    return 0;
}
