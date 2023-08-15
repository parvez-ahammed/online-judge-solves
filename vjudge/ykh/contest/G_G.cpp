
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"
const int limit = 1e6; // 1e9

vector<bool> is_prime(limit + 1, true);

vector<int> s;



void sieve()
{
    is_prime[0] = is_prime[1] = false;

    for (int num = 2; num * num <= limit; ++num)
    {
        if (is_prime[num])
        {
            s.push_back(num);
            for (int multiple = num * num; multiple <= limit; multiple += num)
            {
                is_prime[multiple] = false;
            }
        }
    }
}


bool is_composite(int num) {
    if (num <= 1) {
        return false;  
    }
    
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return true;  
        }
    }
    
    return false;  
}

void solve()
{

    int n;

    cin >> n;

    if (n <= 4)
    {
        cout << -1 << endl;
        return;
    }
    int len = s.size();
    for (int i = 0; i < len; i++)
    {

        if (is_composite(n - s[i]))
        {
            cout << s[i] << " " << n - s[i] << endl;
            return;
        }
    }

    cout << -1 << endl;
}
int32_t main()
{

    FAST;

    sieve();

    
    int tc;
    cin >>tc;

    while(tc--)
    solve();
    return 0;
}
