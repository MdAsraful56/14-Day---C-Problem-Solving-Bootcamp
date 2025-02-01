#include<iostream>
using namespace std;
int main()
{
    int star = 25;
    for (int i = 0; i <= 25; i++)
    {
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << "\n";
        star--;
    }
    return 0;
}