#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            cout << array[i] << " ";
        }
        
        // cout << i << " : " << array[i] << '\n';
    }
    
    return 0;
}