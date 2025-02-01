#include<iostream>
using namespace std;
int main()
{
    int tk = 500;

    if (tk >= 200)
    {
        if (tk >= 500)
        {
            cout << "Burger & Pizza";
        }
        else
        {
            cout << "Burger";
        }
    }
    else if (tk >= 100)
    {
        cout << "Tea & Cold Water";
    }
    else
    {
        cout << "No Money";
    }
    return 0;
}