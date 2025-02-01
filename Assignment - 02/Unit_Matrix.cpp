#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int grid[N][N];

    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {
            cin >> grid[N][N];
        }
        
    }


    bool unitMatrix = true;


    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {
            if (row == col)
            {
                if (grid[N][N] == 1)
                {
                    
                }
                else {
                    unitMatrix = false;
                }
            }
            
            else if (row > col  && row < col)
            {
                if (grid[N][N] == 0)
                {
                    
                }
                else {
                    unitMatrix = false;
                }
            }
            
        }
        
    }
    

    if (unitMatrix)
    {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
    
    return 0;
}