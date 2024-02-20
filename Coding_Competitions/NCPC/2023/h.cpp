/*
  Author: MEHEDI ISLAM REMON
  AUST CSE 44th Batch
*/
#include <bits/stdc++.h>
#define ll long long int
#define nline "\n"
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cin.tie(nullptr);             \
    cout.tie(nullptr);
#define pb push_back
#define pi acos(-1)
#define Mod 1000000007
#define sn 10000000011
#define MAX intONG_MAX
#define F first
#define S second
using namespace std;

bool isLeapYear(int year)
{
    if (year % 400 == 0) {
        return true;
    }
    if (year % 100 == 0) {
        return false;
    }
    if (year % 4 == 0) {
        return true;
    }
    return false;
}
void solve()
{

    string date, day;
    cin >> date >> day;

    // cout << date << " " << day << endl;

    int dd = stoi(date.substr(0, 2));
    int mm = stoi(date.substr(3, 2));
    int yyyy = stoi(date.substr(6, 4));

    bool leap = isLeapYear(yyyy);

    // cout << dd << " " << mm << " " << yyyy << " " << leap << endl;

    string dashLine = "|---------------------------|";

    cout << dashLine << endl;
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << endl;
    cout << dashLine << endl;

    vector<string> dates(6, "| - | - | - | - | - | - | - |");

    vector<int> month = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (leap)
        month[2]++;

    map<string, ll> match;
    match["Sun"] = 0, match["Mon"] = 1, match["Tue"] = 2, match["Wed"] = 3, match["Thu"] = 4, match["Fri"] = 5, match["Sat"] = 6;
    for (int k = 0; k < 7; k++) {
        vector<string> res;
        bool start = 0;
        int val = 1;
        bool ans = 0;

        int ache = 35 - month[mm];
        int extra = 0;
        if (k > ache) {
            extra = k - ache;
        }

        for (int i = 0; i < 5; i++) {
            string s = "|";
            if (i == 0) {
                if (extra == 1 && month[mm] == 30) {
                    s += " 30|";
                    if (dd == 30 && match[day] == 0)
                        ans = 1;
                } else if (extra == 1 && month[mm] == 31) {
                    s += " 31|";
                    if (dd == 31 && match[day] == 0)
                        ans = 1;
                } else if (extra == 2) {
                    s += " 30| 31|";
                    if (dd == 30 && match[day] == 0)
                        ans = 1;
                    if (dd == 31 && match[day] == 1)
                        ans = 1;
                }
            }
            for (int j = extra; j < 7; j++) {
                if (j == k) {
                    start = 1;
                }
                if (start && val <= month[mm]) {
                    if (val == dd && j == match[day]) {
                        ans = 1;
                    }
                    if (val <= 9) {
                        s += "  " + to_string(val) + "|";
                    } else {
                        s += " " + to_string(val) + "|";
                    }
                    val++;
                } else {
                    s += " - |";
                }
            }
            res.push_back(s);
            res.push_back(dashLine);
            extra = 0;
        }
        if (ans) {
            for (auto it : res)
                cout << it << endl;
            break;
        }
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
        cout << endl;
    }
    return 0;
}
