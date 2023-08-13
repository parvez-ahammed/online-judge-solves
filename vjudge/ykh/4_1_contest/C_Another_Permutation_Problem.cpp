#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

vector<int> muls(252), pref(252);

void pre()
{

    for (int i = 1; i < 252; i++)
        muls[i] = (i * i);
    for (int i = 1; i < 252; i++)
        pref[i] = muls[i] + pref[i - 1];
}

int32_t main()
{

    FAST;

    pre();

    int tc;
    cin >> tc;

    while(tc--)
    {
        int n ;
        cin >> n ;
        cout << pref[n-2] + (n* (n-1)) <<endl;
    }

    return 0;
}