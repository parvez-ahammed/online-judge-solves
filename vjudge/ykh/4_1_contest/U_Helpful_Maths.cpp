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

    string str;
    cin >> str;

    vector<char> v;
    int n = str.size();
    for (int i = 0; i < n; i++)
        if (isdigit(str[i]))
            v.push_back(str[i]);

    sort(v.begin(), v.end());

    int m = v.size();

    for (int i = 0; i < m - 1; i++)
        cout << v[i] << "+";
    
    cout << v.back();

    return 0;
}