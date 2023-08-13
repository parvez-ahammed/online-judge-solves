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
    int cntCap = 0, cntSmall = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (isalpha(str[i]))
        {
            isupper(str[i]) ? cntCap++ : cntSmall++;
        }
    }

    cout << cntCap << " " << cntSmall << endl;

    return 0;
}