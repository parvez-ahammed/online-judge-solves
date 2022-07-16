#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    int temp;

    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        if (temp != k)
        {

            cout << temp << " ";
        }
    }
}