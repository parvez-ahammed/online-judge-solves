/*
This is how it works. LibertyBell keeps track of all phone calls. In addition to yourself, your
calling circle consists of all people whom you call and who call you, either directly or indirectly.
For example, if Ben calls Alexander, Alexander calls Dolly, and Dolly calls Ben, they are all within
the same circle. If Dolly also calls Benedict and Benedict calls Dolly, then Benedict is in the same
calling circle as Dolly, Ben, and Alexander. Finally, if Alexander calls Aaron but Aaron doesn’t call
Alexander, Ben, Dolly, or Benedict, then Aaron is not in the circle.
*/
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

// max value of n is 25

void solve(int a, int b)

{
    set<string> s;
    for (int i = 0; i < b; i++)
    {
        string temp;
        cin >> temp;
        s.insert(temp);
      
        cin >> temp;
        s.insert(temp);
    
    }

    cout << s.size() << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    int a, b;

    while (cin >> a >> b, a, b)
    {
        solve(a, b);
    }
    return 0;
}