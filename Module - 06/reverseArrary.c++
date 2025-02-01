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
    

    //Forward Order
    cout << "Forward Order -> \n";

    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }
    cout << "\n";


    //Reverse Order 
    cout << "Reverse Order -> \n";
    
    for (int i = n - 1; i >= 0; i--)
    {
        cout << marks[i] << " ";
    }
    
    
    return 0;
}