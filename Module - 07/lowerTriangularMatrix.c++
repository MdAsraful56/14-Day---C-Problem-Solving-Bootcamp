#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int grid[n][n];
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> grid[row][col];
        }
        
    }

    bool lowerTriangularMatrix = true;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if(row >= col) {
                if (grid[row][col] >= 1)
                {
                    
                }
                else {
                    lowerTriangularMatrix = false;
                }
            }
            else {
                if (grid[row][col] == 0) {
                    
                }
                else {
                    lowerTriangularMatrix =false;
                }
            }
        }
        
    }
    
    if (lowerTriangularMatrix)
    {
        cout << "Yes" << '\n';
    }
    else {
        cout << "No" << '\n';
    }
    
    return 0;
}