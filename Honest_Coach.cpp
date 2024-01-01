#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin>> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        sort(A, A+n);
        int min= 100000;
        for (int i = 0; i < n-1; i++)
        {
            int temp = abs(A[i]-A[i+1]);
            if(temp<min)
            {
                min = temp;
            }
        }
        cout<< min << endl;
    }
}