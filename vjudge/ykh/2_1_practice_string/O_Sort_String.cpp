#include <bits/stdc++.h>
using namespace std;
int arr[26];

int main()
{

    int n;

    cin >> n;
    char c;

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        arr[c - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < arr[i]; j++)
            cout << char(i + 'a');
    }

    cout << '\n';

    return 0;
}