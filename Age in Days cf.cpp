#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;

    int year = N/365;
    int month = (N%365)/30;
    int day = (N%365)%30;

    cout<<year<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<day<<" days"<<endl;
    return 0;
}
