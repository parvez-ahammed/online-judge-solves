#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void solve()
{
    int p;
    cin >> p;

    int check = p;
    map<int, int> factors;
    for (int i = 2; i * i <= p; i++) {
        while (p % i == 0) {
            factors[i]++;
            p /= i;
        }
    }
    if (p > 1)
        factors[p]++;

    vector<int> ans;

    for (auto factor : factors) {
        for (int i = 0; i < factor.second; i++) {
            ans.push_back(factor.first);
        }
    }

    ll sum = 0;
    int sz = ans.size();
    for (int i = 0; i < sz; i++) {

        sum += ans[i];
    }

    if (sum > 41) {
        cout << "-1";
    } else {
        int sz = ans.size();

       
        for (int i = sz -1 ; i >= 0 ; i--) {

           
            for (int j = sz -1 ; j >= 0; j--) {

                if (i == j) continue;

              

                ll temp_sum = ans[i] + ans[j];

                ll temp_mul = ans[i] * ans[j];


                ll change_val =  sum + temp_mul - temp_sum;

                if (change_val >= sum and change_val <= 41) {

                    

                    ans[i] = 0;
                    ans[j] = temp_mul;
                    sum = change_val;

                    
                  
                }
            }
        }

      
        vector<int> f ;

        sum = 0;

        for (int i = 0; i < sz; i++) {
            if (ans[i] != 0) {
                f.push_back(ans[i]);
                sum += ans[i];
            }
        }
        int diff = 41 - sum;

        for (int i = 0; i < diff; i++) {
            f.push_back(1);
        }

        sort(f.begin(), f.end());

        sz = f.size();

        cout << sz << " ";

        ll sum = 0;
        ll mul = 1;

        for (int i = 0; i < sz; i++) {
            cout << f[i] << " ";

            sum += f[i];
            mul *= f[i];
        }

        // if ( (sum == 41 and mul == check and sz < 100))
        //     cout << "true";
    



        
    }
}
int32_t main()
{
  

    // for submission
    freopen("s_inputb1.txt", "r", stdin);
    freopen("s_outputb1.txt", "w", stdout);

    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }
    return 0;
}