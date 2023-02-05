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

vector<ll> v;
vector<pair<ll, ll>> vp;
void global()
{
    ll alice = 1;
    ll bob = 5;

    v.push_back(0);
    v.push_back(alice);

    ll curr = 0;

    for (int i = 2; curr < 10e6 + 7; i++)
    {
        v.push_back(v[i - 1] + 4);
        curr = v[i];
    }
    vp.push_back({0, 0});

    vp.push_back({1, 0});

    for (int i = 2; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            vp.push_back({vp[i - 1].first + 1, vp[i - 1].second + 3});
        }
        else
        {
            vp.push_back({vp[i - 1].first + 3, vp[i - 1].second + 1});
        }
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << vp[i].first << " " << vp[i].second  <<  " " << vp[i].first + vp[i].second << endl;
    // }
}

void solve()
{
    ll n;
    cin >> n;

    ll alice = 0, bob = 0;
    ll alice_black = 0, alice_white = 0;
    ll bob_black = 0, bob_white = 0;

    int i;

    ll sum = 0;
    for (i = 1; sum < n; i++)
    {
        if (i % 2 == 1)
        {
            alice_white += vp[i].first;
            alice_black += vp[i].second;
        }

        else
        {
            bob_white += vp[i].first;
            bob_black += vp[i].second;
        }

        sum = alice_black + alice_white + bob_black + bob_white;
    }
    i--;
    if (sum == n)
    {
        cout << alice_white << " " << alice_black << " " << bob_white << " " << bob_black << endl;
        return;
    }

    else if (i % 2 == 1 && (sum != n))
    {

        alice_white -= vp[i].first;
        alice_black -= vp[i].second;

        ll left = n - alice_white - alice_black - bob_white - bob_black;

        ll half_left = left / 2;

        if (left % 2 == 0)
        {
            alice_white += half_left;
            alice_black += half_left;
        }
        else
        {
            if (vp[i].first > vp[i].second)
            {
                alice_white += half_left + 1;
                alice_black += half_left;
            }
            else
            {
                alice_white += half_left;
                alice_black += half_left + 1;
            }
        }
    }
    else
    {

        bob_white -= vp[i].first;
        bob_black -= vp[i].second;

        ll left = n - alice_white - alice_black - bob_white - bob_black;

        ll half_left = left / 2;

        if (left % 2 == 0)
        {
            bob_white += half_left;
            bob_black += half_left;
        }
        else
        {
            if (vp[i].first > vp[i].second)
            {
                bob_white += half_left + 1;
                bob_black += half_left;
            }
            else
            {
                bob_white += half_left;
                bob_black += half_left + 1;
            }
        }
    }
    cout << alice_white << " " << alice_black << " " << bob_white << " " << bob_black << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    global();
    while (tc--)
    {
        solve();
    }
    return 0;
}