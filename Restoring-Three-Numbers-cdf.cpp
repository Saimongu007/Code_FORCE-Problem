#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int a[4];
    for(int i = 0; i<4; i++)
    {
        cin>> a[i];
    }

    sort(begin(a), end(a));
    
    cout<< a[3] - a[0] << " "<< a[3] - a[1] <<" "<< a[3] - a[2] <<endl;
    
    return 0;
}




