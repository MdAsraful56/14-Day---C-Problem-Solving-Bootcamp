#include<bits/stdc++.h>
using namespace std;

// int  count_before_one() {};
int main()
{
    int N;
    cin >> N;
    int array[N];

    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        cout << array[i] << " ";
    }
    
    return 0;
}