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

void solve()
{

    int n ;
    cin >> n ;

    int strings = 2*n - 2 ;

    string first_s  = "" ;
    string second_s = "" ;

    string s1 = "" ;
    string s2 = "" ;

    for (int i = 0 ; i < strings ; i++)
    {
        string s ;
        cin >> s ;

        int len = s.length() ;

        if (len == n-1 && first_s == "")
        {
            first_s = s ;
        }
        else if (len == n-1 && first_s != "")
        {
            second_s = s ;
        }

        if ( len == 1 && s1 == "")
        {
            s1 = s ;
        }
        else if (len == 1 && s1 != "")
        {
            s2 = s ;
        }
       

    }
    if ( s1 != s2)
    {
        cout << "NO" << endl ;
    }
    else 
    {

        Reverse (first_s) ;

        if (first_s != second_s)
        {
            cout << "NO" << endl ;
        }
        else
        {
            cout << "YES" << endl ;
        }
       
    
    }

   


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