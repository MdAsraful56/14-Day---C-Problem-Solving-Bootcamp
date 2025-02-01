#include<iostream>
int main()
{
    int a = 12;
    int b = 20;

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = b / a;

    std:: cout << sum << " " << sub << " " << mul << " " << div;

    float x = 5;
    float y = 2;
    float dive = x / y;
    std:: cout << " " << dive;

    // int p = x % y;
    int p = 17;
    int q = 3;
    int divesion = p / q;
    int revers = p % q;
    std:: cout << " " << divesion << " " << revers;

    return 0;
}