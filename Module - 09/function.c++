#include<bits/stdc++.h>
using namespace std;

//   Normal Functions
int sumTwoNumber(int x, int y){
    int sum = x + y;
    return sum;
}
int sumThreeNumber(int x, int y, int z = 10){
    int sum = x + y + z;
    return sum;
}

int main()
{
    int a, b;
    cin >> a >> b;
    
    cout << sumTwoNumber(a, b) << "\n";

    cout << sumThreeNumber(a, b) << "\n";

    int c;
    cin >> c ;
    cout << sumThreeNumber(a, b, c) << "\n";

    return 0;
}