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

    int x, v;
    cin >> x >> v;

    bool exists = false;
    for (int i = 0; i < N; i++)
    {
        if (array[i] == v)
        {
            exists = true;
            break;
        }
        
    }
    
    if (!exists)
    {
        array[1] = v;
    }
    else
    {
        array[N - 1] = v;
    }
    
    // array[1] = v;

    for (int i = N - 1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }

    return 0;
}