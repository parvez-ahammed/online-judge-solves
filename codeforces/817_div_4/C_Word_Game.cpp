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


int checkPersonPoint(map<string , int> toFind , map<string , int> mp1 , map<string , int> mp2)
{
    int points = 0 ;
    for(auto it : toFind)
    {
        if(mp1[it.first] == 0 && mp2[it.first] == 0)
            points += 3 ;
        else if(mp1[it.first] == 1 && mp2[it.first] == 1)    
            points += 0 ;
        else  
            points += 1 ;
        
    }
    return points ;
}


map <string , int > takeMapInput(int n)
{
    map <string , int> mp ;
    for(int i = 0 ; i < n ; i++)
    {
        string s ;
        cin >> s ;
        mp[s]++ ;
    }
    return mp ;
}

void solve()
{
    int n ;
    cin >> n ;

    map <string , int> mp1 , mp2 ,mp3 ;

    mp1 = takeMapInput(n) ;
    mp2 = takeMapInput(n) ;
    mp3 = takeMapInput(n) ;

    int person1Points = 0 , person2Points = 0 , person3Points = 0 ;

    person1Points = checkPersonPoint(mp1 , mp2 , mp3) ;
    person2Points = checkPersonPoint(mp2 , mp1 , mp3) ;
    person3Points = checkPersonPoint(mp3 , mp1 , mp2) ;

    cout << person1Points << " " << person2Points << " " << person3Points << endl ;
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