#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int marks[n];

    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // sum = sum + marks[i];
        sum += marks[i];
    }
    
    cout << "Sum = " << sum << '\n';

    float avg = 0;

    avg = (1.0 * sum / n);
    cout << "Average = " << avg << "\n";

}