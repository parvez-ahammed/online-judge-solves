#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> v;
    long long temp;
    long long counter = 0;

    for (long long i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
        if (i > 0)
        {
            if (temp < v[i - 1])
            {
                counter += (v[i - 1] - temp);
                v[i] = v[i - 1];
            }
        }
    }
    cout << counter << endl;
}