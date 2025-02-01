#include<bits/stdc++.h>
using namespace std;

int primeFunction(int x) {
    for (int i = 1; i <= x; i++)
    {
        if (i / i == 0 || i / 1 == i)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        
    }
    
};

int main()
{
    int N;
    cin >> N;
    primeFunction(N);

    return 0;
}