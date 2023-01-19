#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;
#define all(x) x.begin(),x.end();

void solve()
{

   ll a,c;
   cin >>a>>c;
   ll b = a|c;
   //cout << a-c <<endl;
   if(b>c){
    cout <<"impossible" <<endl;
   }
   else cout <<b <<endl;


//cout <<"Case "<<t <<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    tc = 1;
    cin >>tc;
    while(tc--)
    {
        solve();
    }
}