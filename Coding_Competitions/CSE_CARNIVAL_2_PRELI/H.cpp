#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

vector<string> palins;

void processString(string ans)
{

    string rev = ans;

    reverse(rev.begin(), rev.end());

    if (rev == ans)
        palins.push_back(ans);
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    string str;

    cin >> str;

    int left = 0;

    while (left < n)
    {

        string ans = "";

        char curr_left = str[left];
       

        int right = n - 1;

        while (left < right)
        {
            char curr_right = str[right];

            if (curr_left == curr_right)
            {
                ans += str[left];
                left++;
                
            }

            --right;
        }

        cout << ans  << " \t"<< left << " " << right<< endl;

        processString(ans);

        left++;
    }

    k--;

    cout << endl;

    sort(palins.begin(), palins.end());

    reverse(palins.begin(), palins.end());

    // rep(0, palins.size()) cout << palins[i] << endl;

    cout << endl;

    if (k < palins.size())
        cout << palins[k] << endl;
    else
        cout << -1 << endl;

    return 0;
}