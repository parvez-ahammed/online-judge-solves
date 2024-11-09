#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define f(i,x,y) for(int i=x;i<y;i++)
#define f2(i,x,y) for(int i=x;i>=y;i--)
#define pii pair<int,int>
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int MOD =1000000007;
const int INF = 1e18;
const int N = 2e5;
vector<string> v = {"Evenius","Oddius"};
void solve(int tc){
    int n,p; cin >> n >> p;
    cout << "Case " << tc << ": ";
    if(n==1){
        if(p==1){
            cout << "Evenius" << endl;
        }
        else cout << "Oddius" << endl;
    }
    else{
        if(n%4==1){
            if(p==1){
                cout << "Oddius" << endl;
            }
            else cout << "Evenius" << endl;
        }
        else {
            cout << "Oddius" << endl;
        }
    }
}
int32_t main(){

    Fast

    int t=1;

    cin >> t;

    for(int tc=1;tc<=t;tc++){

        solve(tc);
    }
    return 0;
}