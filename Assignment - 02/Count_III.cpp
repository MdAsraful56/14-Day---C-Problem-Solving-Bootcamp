#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    // cout << S;
    int len = S.length();

    for (int i = 0; i < len; i++)
    {
        S[i] = tolower(S[i]);
    }
    
    int count[26] = {0};

    for (char i : S) {
        if (i >= 'a' && i <= 'z')
        {
            count[i - 'a']++;
        }
        
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        cout << i << " - " << count[i - 'a'] << '\n';
    }
    
    // cout << S;

    return 0;
}