#include<bits/stdc++.h>
using namespace std;

int is_palindrome(const string& S){
    int len = S.length();
    int x;
    for (int i = len - 1; i >= 0; i--)
    {
        x.push_back(S[i]);
    }
    // cout << x << "\n";
        if (S==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};

int main() 
{
    string input;
    cin >> input;

    int result = is_palindrome(input);

    if (result == 1)
    {
        cout << "Palindrome" << "\n";
    }
    else
    {
        cout << "Not Palindrome" << "\n";
    }
    return 0;
}