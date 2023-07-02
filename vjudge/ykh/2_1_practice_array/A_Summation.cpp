#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    int temp;
    while (n--)
    {
        cin >> temp;
        sum += temp;
    }

    cout << abs(sum) << endl;
}