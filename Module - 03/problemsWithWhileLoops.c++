#include<iostream>
using namespace std;
int main()
{
    char ch = 'a';

    while (ch <= 'z')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << ch << " - Vowel \n";
        }
        else
        {
            cout << ch << "- Consonant \n";
        }
        
        // cout << ch;
        ch++;
    }
    return 0;
}