#include<iostream>
using namespace std;
int main()
{
    char input ;
    cin >> input;
    if (input++)
    {
        char nextChar = input;
        if (nextChar > 'z')
        {
            nextChar = 'a';
            cout << nextChar;
        }
        else
        {
            cout << nextChar;
        }
        
    }
    return 0;
}