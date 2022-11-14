#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <cstring>
#include <iostream>
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

int dx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int dy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

vector <int > color ( 1000, 0);

vector < pair<int, int> > cost ;
int getCost(int src, vector < vector <int > > vv, int cost_index)
{

    queue < int > q;
    q.push(src);
    int added_adj = 0 ;

    while(!q.empty())
    {

        int curr_src =q.front();
        q.pop();

        //cout << "FROM SOURCE " << curr_src << "  VISITING " <<endl;

        for (int i = 1 ; i < vv[curr_src].size() ; i++)
        {

            int adj = vv[curr_src][i];
            //cout << "ADJ = " << adj << endl;

            if (color[adj] == 0)
            {
                //cout << "ADDING " << adj << endl;
                q.push(adj);
                color[adj] = 1;
                added_adj +=1;


            }
        }
    }


    return added_adj == 0 ? 0 : cost[cost_index].first;
}

int32_t main()
{

    int n = 0, k  = 0;
    cin >> n >> k ;


    int temp;

    for (int i = 1 ; i <= n ; i++)
    {
        cin >> temp ;
        cost.push_back(make_pair(temp,i));
    }

    Sort(cost);
    set <int> unique_src;
    vector < vector < int > > vv (n+2, vector<int> (1, 0));
    for (int i = 0 ; i < k ; i++ )
    {

        int src, des;
        cin >> src >> des;
        vv[src].push_back(des);
        unique_src.insert(src);
    }
    int iceCream = 0;
    for (int i = 0 ; i <cost.size()  ; i++)
    {

        iceCream  += getCost(cost[i].second, vv, i);

    }

    cout << iceCream << endl;






    return 0;
}
/*
10 5
1 6 2 7 3 8 4 9 5 10
1 2
2 4
5 6
7 8
9 10

10 5
3 6 2 7 3 8 4 9 5 10
1 2
2 4
4 6
6 8
8 10
*/

