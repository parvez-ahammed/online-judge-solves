#include <iostream>
#include <bits/stdc++.h>
using namespace std;


#define SortA(ar, s) sort(ar, ar + s)
#define SortD(ar, s) sort(ar, ar + s, greater<int>())


int main()
{

    long long n;
    cin >> n;
    long long arr[n];
    long long even_count = 0;
    long long odd_count = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];

        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    SortA(arr, n);

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else if ((odd_count == 1 && even_count == 0))
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((sum - arr[i]) % 2 == 0 )
            {
                sum -= arr[i];
                break;
            }
        }
        cout << sum << endl;

    }

    
}