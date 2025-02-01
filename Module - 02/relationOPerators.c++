#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 5;

    int a = x < y;  // false   0
    int b = x > y;  // true    1
    int c = x >= y; //true     1
    int d = x <= y; //false    0
    int e = x == y;   // false 0
    int f = x != y;   // true  1

    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f;
}