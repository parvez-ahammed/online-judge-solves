#include<bits/stdc++.h>
#define iamspeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
typedef long long int ll;
const ll modd=1e9+7;
const ll N=1e6+5;
ll x,y,z,n,m,k,w,sum,ans,cnt,cnt2,res,mn,mx,t,tt,q,i,j;
string s,ss;
int main()
{
    iamspeed

    cin>>n;
    vector<ll>a(n+1),b(n+1);
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=n; i++)
    {
        cin>>b[i];
    }

    vector<pair<ll,ll>>v;
    for(i=1; i<=n; i++)
    {
        v.push_back({a[i],b[i]});
    }
    sort(v.begin(),v.end(),greater<pair<ll,ll>>());
    vector<ll>pref(13,0),prefall[13];
    for(i=0; i<n; i++)
    {
        auto [fir,sec]=v[i];
        pref[sec]+=fir;
        prefall[sec].push_back(pref[sec]);
    }
    int q;
    cin>>q;
    while(q--)
    {
        ll type,xx,yy;
        cin>>type;
        if(type==1)
        {
            cin>>xx;
            sum=0;
            for(i=1; i<=xx; i++)
            {
                sum+=pref[i];
            }

            
        }
        else
        {
            cin>>xx>>yy;
            sum=0;
            for(i=1; i<=xx; i++)
            {
                int ind=min((ll)(prefall[i].size()-1),yy-1);
                if(ind>=0)sum+=prefall[i][ind];
            }
        }

        // if (sum == 148407 )
        // {
        //     cout << type << " " << xx << " " << yy << endl;
        //     return 0;
        // }
        cout<<sum<<endl;
    }




    return 0;
}
