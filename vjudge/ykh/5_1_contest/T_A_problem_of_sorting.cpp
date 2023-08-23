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
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;
        cin.ignore();
        vector<pair<int, string>> v;
        for (int i = 1; i <= n; i++)
        {
            string s;
            getline(cin, s);
            int len = s.size();
            string birth_year_in_string = s.substr(len - 4);
            int birth_year = stoi(birth_year_in_string);
            string name = s.substr(0, len - 5);

            v.push_back(make_pair(birth_year, name));
        }
        sort(v.rbegin(), v.rend());
        for (auto [birth_year, name] : v)
        {
            cout << name << '\n';
        }
    }
    return 0;
}