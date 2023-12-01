#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
map<string, char> mp = {
    { "one", '1' },
    { "two", '2' },
    { "three", '3' },
    { "four", '4' },
    { "five", '5' },
    { "six", '6' },
    { "seven", '7' },
    { "eight", '8' },
    { "nine", '9' }
};

struct position {
    int mn = INT_MAX;
    int mx = INT_MIN;

    string mnVal = "0";
    string mxVal = "0";
};

vector<int> substrPosition(string str, string sub_str)
{
    vector<int> v;
    bool flag = false;
    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, sub_str.length()) == sub_str) {
            v.push_back(i);
            flag = true;
        }
    }
    return v;
}

position getDigitPosition(string s)
{
    position digitPos;

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) {
            digitPos.mn = i;
            digitPos.mnVal = s[i];
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--) {
        if (isdigit(s[i])) {
            digitPos.mx = i;
            digitPos.mxVal = s[i];
            break;
        }
    }

    return digitPos;
}

position getStringPositon(string s)
{
    position stringPos;

    for (auto [key, value] : mp) {
        vector<int> temp = substrPosition(s, key);

        if (temp.size() > 0) {

            for (int i = 0; i < temp.size(); i++) {

                if (temp[i] < stringPos.mn) {
                    stringPos.mn = temp[i];
                    stringPos.mnVal = value;
                }

                if (temp[i] > stringPos.mx) {
                    stringPos.mx = temp[i];
                    stringPos.mxVal = value;
                }
            }
        }
    }

    return stringPos;
}

string generateString(position a, position b)
{
    string s = "0";
    s += (a.mn < b.mn) ? a.mnVal : b.mnVal;
    s += (a.mx > b.mx) ? a.mxVal : b.mxVal;
    return s;
}
int processString(string s)
{

    string val = "0";

    position digitPos = getDigitPosition(s);
    position stringPos ;
    // Commment out the line below to get the first puzzle Accepted
    stringPos= getStringPositon(s);

    val = generateString(digitPos, stringPos);

    return stoi(val);
}
void solve()
{

    string s;

    ll sum = 0;
    while (cin >> s) {
        sum += processString(s);
    }
    cout << sum << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}