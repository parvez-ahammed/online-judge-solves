#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define endl "\n"
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
#define rep(start, x) for (int i = start; i < x; i++)

vector<pair<int, int>> generateTimes(int startHour, int startMinute, int interval)
{
    map<pair<int, int>, int> mp;

    int curr_h = startHour, curr_m = startMinute;
    int interval_h = interval / 60;
    int interval_m = interval - (60 * interval_h);
    
    vector<pair<int, int>> v;

    while (mp.count({curr_h, curr_m}) == 0)
    {
        v.push_back({curr_h, curr_m});
        mp[{curr_h, curr_m}]++;

        curr_h += interval_h;
        curr_m += interval_m;

        if (curr_m > 59)
            curr_h++;

        curr_m %= 60;
        curr_h %= 24;
    }

    return v;
}

bool isPalindrome(int hour, int minute)
{

    string hour_s = to_string(hour), min_s = to_string(minute);
    if (hour_s.size() == 1)
        hour_s.insert(hour_s.begin(), '0');
    if (min_s.size() == 1)
        min_s.insert(min_s.begin(), '0');

    string time = hour_s + ":" + min_s;
    string rev = time;
    reverse(rev.begin(), rev.end());

    return rev == time;
}

void solve()
{
    int hour, minute, x;
    char c;
    cin >> hour >> c >> minute >> x;

    vector<pair<int, int>> times;

    times = generateTimes(hour, minute, x);

    int cnt = 0;

    rep(0, times.size())
    {
        if (isPalindrome(times[i].first, times[i].second))
            cnt++;
    }
    cout << cnt << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}