#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int arr[22];
int x;
int n;

bool possible(int indice, ll result)
{

    if (indice == n)
        return (result + arr[indice + 1] == x || result - arr[indice + 1] == x);
    else
        return (possible(indice + 1, result + arr[indice + 1]) || possible(indice + 1, result - arr[indice + 1]));
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> x;

    rep(0, n) cin >> arr[i];

    possible(0, arr[0]) ? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}