#include<bits/stdc++.h>
using namespace std;

int sumTwoNumber(int x, int y){
    int sum = x + y;
    return sum;
}

int main()
{
    int x, y;
    cin >> x >> y;

    int sum = sumTwoNumber(x, y);
    cout << sum << '\n';

    return 0;
}