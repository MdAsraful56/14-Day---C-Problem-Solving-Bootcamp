#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    // cout << S;

    int CapitalLetter = 0;
    int SmallLetter = 0;

    for (char a : S) {
        if (isupper(a))
        {
            CapitalLetter++;
        }
        else if (islower(a)) {
            SmallLetter++;
        }
    }

    cout << CapitalLetter << " " << SmallLetter << "\n";

    return 0;
}