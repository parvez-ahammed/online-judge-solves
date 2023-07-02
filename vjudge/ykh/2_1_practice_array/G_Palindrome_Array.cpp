#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool possible = true;
    int j = n - 1;

    for (int i = 0; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            possible = false;
            break;
        }
    }

    if (possible)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}