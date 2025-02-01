#include<iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (x >= y && x >= z)
    {
        cout << x << "Is The Max Number";
    }
    else if (y >= x  && y >= z)
    {
        cout << x << "Is The Max Number";
    }
    else
    {
        cout << z << "Is The Max Number";
    }
    
    return 0;
}