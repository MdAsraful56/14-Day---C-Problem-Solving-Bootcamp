#include<iostream>
using namespace std;
int main()
{
    int input ;
    cin >> input;

    for (int i = input; i <= input; i--)
    {
        if (input % i == 0)
        {
            cout << input / i;
        }
        else
        {
            continue;
        }
        
        cout << "\n";
    }
    return 0;
}