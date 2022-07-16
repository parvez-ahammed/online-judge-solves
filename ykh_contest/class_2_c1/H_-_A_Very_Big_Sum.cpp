#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int temp = 0;
    long long sum = 0;

    while (n--)
    {
        cin >> temp;
        sum += temp;
    }

    cout << sum << endl;
}