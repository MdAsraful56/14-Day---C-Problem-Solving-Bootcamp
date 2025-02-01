#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int array[3];
    // array[0] = 12;
    // array[1] = 22;
    // array[2] = 33;

    // cout << array[0];


    int n;
    cin >> n;
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << '\n';
    }
    


    return 0;
}