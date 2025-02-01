#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin>> a;

    int n = a.size();
    for (int i = n - 1; i >= 0; i--)
    {
        b.push_back(a[i]);
    }
    
    // cout << a << "\n";
    // cout << b << "\n";

    if (a==b)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    

    return 0;
}