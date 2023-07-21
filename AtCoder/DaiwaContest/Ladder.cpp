#include<bits/stdc++.h>
using namespace std;

vector <int> graph[400000];
vector <int> val;
int main ()
{

    int n ;
    cin >> n ;

    int a , b;

    map <int,int> mp;

    int cnt = 0;
    int root = 1;
    mp[root] = ++cnt; val[cnt] = root;

    for (int i = 0 ; i < n ; i++)
    {
        cin >> a >> b;

        if (mp.count(a) == 0) mp[a] = ++cnt , val[cnt] = a;
        if (mp.count(b) == 0) mp[b] = ++cnt , val[cnt] = b;


        a = mp[a];
        b = mp[b];
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (auto  p : mp)
        cout << p.first << " " << p.second << endl;

        return 0;
}

/*
4
1 4
4 3
4 10
8 3
*/
