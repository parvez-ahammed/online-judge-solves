#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int count = 0;

    for (int i = 1; i < n; i++)a
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}