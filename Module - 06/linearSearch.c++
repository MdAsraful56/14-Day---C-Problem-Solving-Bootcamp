#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, target;
    cin >> n >> target;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == target)
        {
            index = i;
            break;
        }
    }
    cout << index << '\n';
    
    return 0;
}