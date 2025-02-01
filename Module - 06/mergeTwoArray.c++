#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array1[i];
    }
    
    int m;
    cin >> m;
    int array2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> array2[i];
    }
    
    int array3[n + m];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        array3[index++] = array1[i];
    }
    
    for (int i = 0; i < m; i++)
    {
        array3[index++] = array2[i];
    }
    
    for (int i = 0; i < n + m; i++)
    {
        cout << array3[i] << " ";
    }
    cout << '\n';

    return 0;
}