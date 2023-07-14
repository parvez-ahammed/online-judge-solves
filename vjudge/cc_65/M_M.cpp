#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

vector<string> v;
bool isPalindrome(string str)
{
    string rev = str;
    reverse(rev.begin(), rev.end());
    return str == rev;
}

void subSeq(string input, string output)
{
    if (input.empty())
    {
        if (isPalindrome(output))
            v.push_back(output);
        return;
    }
    subSeq(input.substr(1), output + input[0]);
    subSeq(input.substr(1), output);
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    map<char, int> mp;
    rep(0, str.size()) mp[str[i]]++;

    subSeq(str, "");
    string ans = "";

    rep(0, v.size())
    {
        if (v[i] > ans)
            ans = v[i];
    }

    cout << ans << endl;
    return 0;
}