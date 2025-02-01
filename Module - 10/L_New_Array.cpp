#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int grid [n][n];

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> grid[row][col];
        }
        
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout >> grid[row][col];
        }
        cout << '\n';
    }


    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout >> grid[row][col];
        }
     //   cout << '\n';
    }


    
    
}