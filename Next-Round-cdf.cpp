#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int count = 0;
    int p = 0;

    for (int i = 0; i < n; ++i)
    {
        int score;
        cin >> score;

        
        if (i == k - 1)
            p = score;

        
        if (score > 0 && score >= p)
            count++;
    }

    
    cout << count << endl;

    return 0;
}
