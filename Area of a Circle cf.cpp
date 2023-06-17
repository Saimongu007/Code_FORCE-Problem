//Area of a Circle
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout <<fixed<< setprecision(9);
    float R,pi;
    cin>>R;
    pi = 3.141592653;
    float area = 3.141592653 * R * R;

    cout<<area;
    return 0;
}
