#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
}