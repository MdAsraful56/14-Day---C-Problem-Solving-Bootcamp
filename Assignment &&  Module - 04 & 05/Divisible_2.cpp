#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for (int i = 21; i <= N; i++)
    {
        if (i % 3 == 0  &&  i % 7 == 0)
        {
            cout << i;
        }
        else
        {
            continue;
        }
        
        cout << "\n";
    }
}