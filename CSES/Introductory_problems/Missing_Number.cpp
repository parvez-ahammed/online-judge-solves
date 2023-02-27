#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long curr_sum = 0;

    long long temp = 0;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> temp;
        curr_sum += temp;
    }

    long long total_sum = (n * (n + 1)) / 2;
    cout << total_sum - curr_sum << endl;
}