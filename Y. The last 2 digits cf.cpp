#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;

    A = A%100;
    B = B%100;
    C = C%100;
    D = D%100;

    int mul = A*B*C*D;

    int last_2_digit = mul%100;
    if(last_2_digit < 10)
    {
        cout<< "0" << last_2_digit <<endl;
    }
    else
    {
         cout<<last_2_digit<<endl;
    }
    return 0;
}
