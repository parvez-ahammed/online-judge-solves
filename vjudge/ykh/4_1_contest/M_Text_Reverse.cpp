#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    cin.ignore();
    
    while (n--)
    {
        string s;
        getline(cin, s);
        stringstream ss;

        ss << s;
        string word;

        while (ss >> word)
        {
            reverse(word.begin(), word.end());
            cout << word << ' ';
        }
        cout << endl;
    }

    return 0;
}