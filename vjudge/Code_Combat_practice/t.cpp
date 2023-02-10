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

int findMaxGCD(vector<int> v, int high)
{
    vector<int> divisors(high + 1, 0);
    int index = 1;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 1; j <= sqrt(v[i]); j++)
        {

            if (v[i] % j == 0)
            {

                divisors[j]++;

                if (j != v[i] / j)
                    divisors[v[i] / j]++;
            }
        }
    }

    for (int i = divisors.size() - 1; i >= 1; i--)
        if (divisors[i] > 1)
            return i;
}

vector<int> takeIntInputFromString(string input)
{
    vector<int> arr;

    int num;
    istringstream is(input);
    while (is >> num)
    {
        arr.push_back(num);
    }

    return arr;
}

void solve()
{

    string input;

    getline(cin, input);

    vector<int> v = takeIntInputFromString(input);
    int max_val = 0;
    for (int i = 0; i < v.size(); i++)
    {
        max_val = max(v[i], max_val);
    }
    cout << findMaxGCD(v, max_val) << endl;
}

int32_t main()
{

    int tc = 1;
    cin >> tc;
    int start = tc - 1;
    tc++;

    while (tc--)
    {
        if (start >= tc)
            solve();
        else
        {
            string input;
            getline(cin, input);
        }
    }
    return 0;
}