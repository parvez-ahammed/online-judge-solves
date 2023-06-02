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
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};
#define BIG_MOD 1000000007
#define vi vector<int>
#define vll vector<ll>

bool isStringEmpty(const std::string &S)
{
}

void solve()
{

    string str;
    cin >> str;

    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        str[i];
        if (str[i] == '0' && !s.empty())
        {

            if (s.top() == '1')
            {
                s.push(str[i]);
            }
            else
            {
                char first = s.top();
                s.pop();

                if (!s.empty())
                {
                    if (s.top() == '1')
                    {
                        s.pop();
                    }
                    else {
                        s.push(first);
                        s.push(str[i]);
                    }
                   
                }
                
            }
            
            
        }
        else
            s.push(str[i]);
    }

    string left;
    while (!s.empty())
    {
        left += s.top();
        s.pop();
    }

 

    if (left ==  "")
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    int i = 1;
    while (tc--)
    {
        cout << "Case " << i++ << ": ";
        solve();
    }
    return 0;
}