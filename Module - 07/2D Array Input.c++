#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int grid[n][m];

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            // cout << "(" << row << "," << col << ")" ;   // Show index number 
            cin >> grid[row][col];
        }
        // cout << '\n';
    }

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cout << grid[row][col] << ' ';
        }
        cout << '\n';
    }
    
    
    // cout << grid[1][2];  // Single element output
    return 0;
}