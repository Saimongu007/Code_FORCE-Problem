// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int k, n, w;
//     cin >> k >> n >> w;

//     int sum = 0;

//     for (int i = 0; i <= w; i++)
//     {
//         sum = sum + (i * k);
//     }

//     if (sum > n)
//     {
//         cout << abs(n - sum) << endl;
//     }
//     else
//     {
//         cout << 0 << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    // Calculate total cost using arithmetic progression sum formula
    int total_Cost = k * w * (w + 1) / 2;

    // Calculate the amount to borrow
    int borrow = max(0, total_Cost - n);

    cout << borrow << endl;

    return 0;
}
