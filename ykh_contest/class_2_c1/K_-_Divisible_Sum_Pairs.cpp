#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            //cout << arr[i] << arr[j] << endl;
            if (((arr[i] + arr[j]) % k == 0))
            {
                count++;
            }
        }
    }

    cout << count << endl;
}