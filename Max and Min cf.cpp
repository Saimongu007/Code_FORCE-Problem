#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;

    int X = max(max(A,B),C);
    int Y = min(min(A,B),C);

    cout<< Y << " " << X <<endl;
    return 0;
}
