#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    getline(cin, S);
    // cin >> S;
    // cout << S;

    int Capital = 0;
    int Small = 0;
    int Spaces = 0;


    for (char c : S) {
        // cout << c << " ";
        if (isupper(c))
        {
            Capital++;
        }
        else if (islower(c))
        {
            Small++;
        }
        else if (isspace(c))
        {
            Spaces++;
        }
        
    }

    cout << "Capital - " << Capital << "\n";
    cout << "Small - " << Small << "\n";
    cout << "Spaces - " << Spaces << "\n";

    return 0;
}