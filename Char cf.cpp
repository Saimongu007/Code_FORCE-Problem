#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z') //97 122
    {
        cout<<(char)(ch-32);
    }
    if(ch>='A' && ch<='Z') //65 90
    {
        cout<<(char)(ch+32);

    }
    return 0;
}
