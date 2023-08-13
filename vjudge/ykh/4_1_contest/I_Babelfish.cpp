#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    map<string, string> mp;

    while (getline(cin, a))
    {
        if (a.empty())
            break;
        stringstream strs(a);
        string word;
        vector<string> words;
        while (strs >> word)
            words.push_back(word);

        mp[words[1]] = words[0];
    }

    while (cin >> a)
    {
        if (mp.count(a) == 0)
            cout << "eh";
        else
            cout << mp[a];
        cout << endl;
    }

    return 0;
}