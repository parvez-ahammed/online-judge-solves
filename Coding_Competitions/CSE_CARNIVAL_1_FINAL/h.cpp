#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vll = vector<long long>;
#define all(x) x.begin(),x.end();

void solve()
{

    string s;
    bool f = false;
    while(cin >>s and s.size())
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);

        if(s == "magic")
        {
          f = true;
        }
    }

    if(f){
       cout << "Magic Exists!"<<endl;
    }
      else cout <<"Magic Where :("<<endl;
    //cout <<s<<endl;

//cout <<"Case "<<t <<endl;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    int tc;
    tc = 1;

    //cin >>tc;
    //cin.ignore();

    while(tc--)
    {
        solve();
    }
}