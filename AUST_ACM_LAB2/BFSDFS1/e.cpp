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
int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[] = {-1, 1, 1, -1, 2, -2, 2, -2};

vector < int > getVector(int query, vector < vector <int > > vv,vector< int > color )
{



    vector < int > color_v = color;

    queue< pair < int, int> > q ;
    q.push (make_pair(query,0));

    while (!q.empty())
    {

        int src = q.front().first;
        int curr_cost = q.front().second;
        q.pop();
        curr_cost++;

        for ( int i = 1 ; i < vv[src].size() ; i++)
        {
            int adj = vv[src][i];
            if (color [adj] != 1 && curr_cost <= 1)
            {
                color[adj]=1;
                q.push(make_pair(adj, curr_cost));
            }
        }
    }
    return color;
}

void solve(int n)



{

    vector < vector <int > > vv(101, vector< int > (1,0));
    vector < int > color ( 101, 0);

    for ( int i = 0 ; i < n; i++)
    {
        int src;

        cin >> src;
        color[src] = 2;

        int des ;
        while (cin>> des)
        {
            if (des == 0)
                break;
            else
                vv[src].push_back(des);
        }


    }

    int stopper ;
    cin >> stopper;

    int query_num ;
    cin >> query_num ;

    for (int i = 0 ; i < query_num ; i++)
    {
        int query = 0 ;
        cin >> query;
        vector < int > result = getVector(query, vv,color);

        cout << count(result.begin(),result.end(),2)<< " ";

        for (int i = 0 ; i < result.size() ; i++)
        {
            if (result[i] == 2)
            {
                cout << i<< " ";
            }
        }
        cout << endl;

    }


}

int32_t main()
{

    int tc = 1;


    while (cin >> tc)
    {
        if (tc== 0)
            break;
        solve(tc);
    }

    return 0;
}
/*
3
1 3 0
2 1 0
3 1 2 0
0
2 1 3
0

*/

