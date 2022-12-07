#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << round(log2(n)) << endl;
    long long arr[n];
    arr[0] = 2;
    int curr = 4;
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i - 1] + curr;
        cout << arr[i - 1] << endl;
        curr += 2;
    }
}