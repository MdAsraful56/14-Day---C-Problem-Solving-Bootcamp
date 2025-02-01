#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 12; i++)
    {
        int result = i * n;
        cout << n << " * " << i << " = " << result << "\n";
    }
    
    return 0;
}