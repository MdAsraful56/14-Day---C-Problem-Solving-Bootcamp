#include<iostream>
using namespace std;
int main()
{
    long long int a, b, c;

    cin >> a >> b >> c;

    if (a % c == 0  && b % c == 0)
    {
        cout << "Both";
    }
    else if (b % c == 0)
    {
        cout << "Mono";
    }
    else if (a % c == 0)
    {
        cout << "Memo";
    }
    else
    {
        cout << "No One";
    }
    
    return 0;
}