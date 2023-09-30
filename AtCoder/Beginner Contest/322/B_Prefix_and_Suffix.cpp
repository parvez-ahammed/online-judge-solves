#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    string firstN = "" ;

    for (int i = 0; i < n; i++) {
        firstN += t[i];
    }

    bool isPrefix = (s == firstN);

    string lastN= "";
    

    for (int i = m-n; i < m; i++) {
        lastN += t[i];
    }

    bool isSuffix = (s == lastN);

    if (isSuffix and isPrefix)
        cout << 0 << endl;
    else if (isPrefix)
        cout << 1<< endl;
    else if (isSuffix)
        cout << 2 << endl;
    else
        cout << 3 << endl;
    return 0;
}