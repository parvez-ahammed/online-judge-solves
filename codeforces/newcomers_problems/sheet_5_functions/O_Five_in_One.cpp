#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int count_prime(vector<int> v)
{
    int count = 0;

    for (int i = 0; i < v.size(); i++)
        isPrime(v[i]) ? count++ : count = count;

    return count;
}
bool isPalindrome(int x)
{
    string first = to_string(x);
    string second = first;
    Reverse(first);
    
    return first == second;
}
int count_palindrome(vector<int> v)
{
    int count = 0;

    for (int i = 0; i < v.size(); i++)
        isPalindrome(v[i]) ? count++ : count = count;

    return count;
}

int count_divisor(int x)

{
    int count = 0;
    for (int i = 1; i <= sqrt(x); i++)
        x % i == 0 ? x / i == i ? count += 1 : count += 2 : count = count;
    return count;
}

int highest_divisor(vector<int> v)
{
    priority_queue<pair<int, int>> q;
    q.push(make_pair(0, 1));

    for (int i = 0; i < v.size(); i++)
        q.push(make_pair(count_divisor(v[i]), v[i]));

    return q.top().second;
}

void solve()
{

    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << "The maximum number : " << *max_element(v.begin(), v.end()) << "\n";
    cout << "The minimum number : " << *min_element(v.begin(), v.end()) << "\n";
    cout << "The number of prime numbers : " << count_prime(v) << "\n";
    cout << "The number of palindrome numbers : " << count_palindrome(v) << "\n";
    cout << "The number that has the maximum number of divisors : " << highest_divisor(v) << "\n";
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}