#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;

    int ages[N];
    for (int i = 0; i < N; i++)
    {
        cin >> ages[i];
    }

    int len = sizeof(ages) / sizeof(ages[0]);
    
    sort(ages, ages + len) ;

    for (int i = 0; i < N; i++)
    {
        if (N % 2 == 1)
        {
            int middleIndex = N /2;
            cout << ages[middleIndex] << '\n';
            break;
        }
        else
        {
            int middleIndex1 = (N / 2) - 1;
            int middleIndex2 = (N / 2);
            cout << ages[middleIndex1] << " " << ages[middleIndex2] << '\n';
            break;
        }
    }
    

    // for (int i = 0; i < N; i++)
    // {
    //     cout << ages[i] << " ";
    // }

    return 0;
}