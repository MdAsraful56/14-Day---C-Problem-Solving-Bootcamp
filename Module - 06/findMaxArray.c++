#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    

    int MAX = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(marks[i] > MAX)
        {
            MAX = marks[i];
        }
    }
    
    cout << "MAX = " << MAX << "\n";

    int MIN = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(marks[i] < MIN)
        {
            MIN = marks[i];
        }
    }
    
    cout << "MIN = " << MIN << "\n";

    return 0;
}