#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 2, m = 3;
    int grid[n][m];
    grid[0][0] = 5;
    grid[0][1] = 62;
    grid[0][2] = 1;
    grid[1][0] = 12;
    grid[1][1] = 17;
    grid[1][2] = 5;

    cout << grid[1][1] << '\n';

    return 0;
}