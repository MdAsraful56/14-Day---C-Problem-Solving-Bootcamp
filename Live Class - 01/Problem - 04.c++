#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= star; k++)
        {
            cout << "*";
        }
        star+=2;
        space--;
        cout << "\n";
    }
    
    return 0;
}