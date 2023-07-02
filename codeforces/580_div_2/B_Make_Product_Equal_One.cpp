#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long zeros = 0, negative_ones = 0, positive_ones = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {

        long long x;
        cin >> x;

        if (x == 0)
            zeros++;
        else if (x < 0)
        {
            negative_ones++;
            sum += abs(x) - 1;
        }
        else
        {
            positive_ones++;
            sum += abs(x) - 1;
        }
    }

    if (negative_ones % 2 == 0)
    {
        sum += zeros;
    }
    else
    {
        zeros >= 1 ? sum += zeros : sum += 2;
    }

    cout << sum << endl;
}