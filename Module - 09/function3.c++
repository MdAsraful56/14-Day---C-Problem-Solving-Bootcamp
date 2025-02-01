#include<bits/stdc++.h>
using namespace std;

//    No Return + Parameter
void sumNumber(int x, int y){
    int sum = x + y;
    cout << sum << "\n";
}

int main()
{
    int a, b;
    cin >> a >> b;

    sumNumber(a,b);
    sumNumber(a + 5,b);
    sumNumber(a,b + 2);

    return 0;
}