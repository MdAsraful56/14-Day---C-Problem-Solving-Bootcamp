#include<iostream>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;

    for (int j = 1; j <= K; j++)
    {
        for (int i = 1; i <= N; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    
    return 0;
}