#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int   
#define endl "\n"

void solve()
{

    ll a, b;
    ll final_cost = 0;
    set<ll> unique;
    cin >> a >> b;

    if (a == b)
    {
        cout << final_cost << endl;
        return;
    }

    queue<pair<ll, ll>> s;
    s.push(make_pair(0, a));
    ll highest_possibel = b*2;

    while (!s.empty())
    {
        ll current_cost = s.front().first;
        ll current_a = s.front().second;
        s.pop();
       
       
        
        if (current_a == b)
        {
            final_cost = current_cost;
            break;
        }
          ll dec = current_a - 1;
          ll inc = current_a + 3;
          ll mul = current_a * 2;
          current_cost++;

      
         if (dec >= 0 && !unique.count(dec))
         { 
             unique.insert(dec);
              s.push(make_pair(current_cost ,dec));
         }
           
            
         if (inc <= b && !unique.count(inc))
         {
             unique.insert(inc);
             s.push(make_pair(current_cost , inc));
         }
            
            
         if (mul <= highest_possibel && !unique.count(mul))
         {   unique.insert(mul);
             s.push(make_pair(current_cost ,mul));
         }
            
    }

    cout << final_cost << endl;
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