#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    int grid[N][M];

    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < M; col++)
        {
            cin >> grid[row][col];
        }
        
    }
    

    for (int row = N - 1; row > 0; row--)
    {
        for (int col = 0; col < M; col++)
        {
            cout << grid[row][col] << " ";
        }
        cout << "\n";
        break;
    }
    
    for (int col = M - 1; col > 0; col--)
    {
        for (int row = 0; row < N; row++)
        {
            cout << grid[row][col] << " ";
        }
        cout << "\n";
        break;
    }

    return 0;
}