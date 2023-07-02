#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long np;
    cin >> np;
    long long temp;
    long long curr_sum = 0;

    for (int i = 1; i <= np-1; i++)
    {
        cin >> temp;
        curr_sum += temp;
    }
    long long sum = (np * (np + 1)) / 2;
    cout << sum - curr_sum << endl;
}