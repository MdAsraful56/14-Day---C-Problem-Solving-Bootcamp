#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    if (1 <= N  && N <= 2^31)
    {
        if (N >= 1500)
        {
            cout << "I will buy Punjabi" << "\n";
            cout << "I will buy new shoes" << "\n";
            cout << "Alisa will buy new shoes";
        }
        else if (N > 1000)
        {
            cout << "I will buy Punjabi";
        }
        else
        {
            cout << "Bad luck!";
        }
    }
    
    return 0;
}