// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long n;
//     cin>> n;

//     int count = 0;

//     while(n > 0)
//     {
//         int number = n % 10;
//         if(number == 4 || number == 7)
//         {
//             count++;
//         }
//         n = n/10;
//     }

//     if(count == 4 || count == 7)
//     {
//         cout<<"YES"<<endl;
//     }
//     else
//     {
//         cout<<"NO"<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        char digit = s[i];
        if (digit == '4' || digit == '7')
        {
            count++;
        }
    }

    string result;
    if (count == 4 || count == 7)
    {
        result = "YES";
    }
    else
    {
        result = "NO";
    }

    cout << result << endl;

    return 0;
}
