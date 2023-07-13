#include <bits/stdc++.h>
using namespace std;

void solve ()
{

    int n ,q;
    cin >> n >> q;
    vector <long long> v(n+1), vp(n+1) , vm(n+1 , 0);
    vp[0] = v[0] = 0;
    long long maxV = 0;

    for(int i =1 ;i <= n ;i++)
    {
        cin >> v[i];
        vp[i] += v[i] + vp[i-1] ;
        maxV = max(maxV, v[i]);
        vm[i] = maxV;

    }
    while (q--)
    {
        int x ;
        cin >> x;
        int idx = upper_bound(vm.begin() , vm.end(), x) - vm.begin() -1;

        cout << vp[idx] << " ";


    }

    cout << endl;
    

}
int main(){

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    
}