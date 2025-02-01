#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << s << " " << s.size() << "\n";


        // push Mathords
    s.push_back('n');
    cout << s << " " << s.size() << "\n";

    s.push_back('g');
    cout << s << " " << s.size() << "\n";


        // pop Mathords 
    s.pop_back();
    s.pop_back();
    cout << s << " " << s.size() << "\n";

    return 0;
}