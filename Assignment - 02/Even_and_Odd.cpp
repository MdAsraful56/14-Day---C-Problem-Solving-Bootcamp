#include<bits/stdc++.h>
using namespace std;

void odd_even(int array[], int N) {
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < N; i++)
    {
        if (array[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    

    cout << evenCount << " " << oddCount <<'\n';
}

int main()
{
    int N;
    cin >> N;
    int array[N];

    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    
    odd_even(array, N);

    return 0;
}