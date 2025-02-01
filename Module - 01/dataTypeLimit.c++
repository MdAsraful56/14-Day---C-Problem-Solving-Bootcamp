#include<iostream>
int main()
{
    // 8 bit = 1 bytes
    // int = 4 bytes -> 10^9
    std:: cout << sizeof(int);

    // long long int = 8 bytes -> 10^18
    std:: cout << sizeof(long long int);

    // float = 4 bytes -> 10^9
    std:: cout << sizeof(float);

    //double = 8 bytes -> 10^18
    std:: cout << sizeof(double);

    //char = 1 bytes
    std:: cout << sizeof(char);
    std:: cout << sizeof(char32_t);  // 4 bytes

}


