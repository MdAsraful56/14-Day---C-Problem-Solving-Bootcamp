#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int i = 0; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " " << "Even Number \n";
        }
        else
        {
            cout << i << " " << "Odd Number \n";
        }
        
    }
    


    return 0;
}