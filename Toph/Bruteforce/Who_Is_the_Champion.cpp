#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int32_t main()
{

    FAST;
    int n, m;
    cin >> n >> m;
    if (n > m)
        cout << "Champion\nRunner up" << endl;
    else
        cout << "Runner up\nChampion" << endl;
    return 0;
}