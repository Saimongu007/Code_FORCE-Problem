#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s = "I hate";

    for (int i = 2; i <= n; i++)
    {
        s =s + " that ";
        if (i % 2 == 0)
        {
            s =s + "I love";
        }
        else
        {
            s =s + "I hate";
        }
    }

    s = s + " it";
    cout << s << endl;

    return 0;
}
