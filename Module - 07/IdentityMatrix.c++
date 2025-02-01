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
            cin >> grid[n][n];
        }
        
    }
    
    bool IdentityMatrix = true;


    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == col)
            {
                if (grid[n][n] == 1)
                {
                    
                }
                else {
                    IdentityMatrix = false;
                }
            }
            
            else if (row > col  || row < col)
            {
                if (grid[n][n] == 0)
                {
                    
                }
                else {
                    IdentityMatrix = false;
                }
            }
            
        }
        
    }
    

    if (IdentityMatrix)
    {
        cout << "Yes" << '\n';
    }
    else {
        cout << "No" << '\n';
    }

}