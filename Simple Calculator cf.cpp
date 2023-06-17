//simple calculator
#include<iostream>
using namespace std;
int main ()
{
    int x,y;
    cin>>x>>y;


    cout<<x <<" + "<< y << " = " << (long long)x+y<<endl;
    cout<<x <<" * "<< y << " = " << (long long)x*y<<endl;
    cout<<x <<" - "<< y << " = " << (long long)x-y<<endl;
    return 0;
}
/*int main()
{
     int x,y;
    cin>>x>>y;

    int add = x+y;
    long long mul = (long long)x*y;
    int sub = x-y;

    cout<<x <<" + "<< y << " = " << (long long)add<<endl;
    cout<<x <<" * "<< y << " = " << mul<<endl;
    cout<<x <<" - "<< y << " = " << (long long)sub<<endl;
    return 0;
}*/
