#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int temp;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;

        if (i >= a && i <= b)
        {
            sum += temp;
        }
    }

    cout << sum << endl;
}