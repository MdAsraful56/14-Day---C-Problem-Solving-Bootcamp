#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int array[N];

    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }

    int x;
    cin >> x;
    
    int output = 0;
    
    for (int i = 0; i < N; i++)
    {
        // cout << array[i] << " ";
        if (array[i] == x)
        {
            output++;
        }
        
    }
    cout << output << "\n";

    return 0;
}