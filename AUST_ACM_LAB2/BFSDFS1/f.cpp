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



int getInt(string str)
{
    int ans = 0;
    for (int i = str.size()-1 ; i >= 0 ; i--)
    {
        int val = (str[i] - '0');
        //cout << " NUM IS  "<< val << endl;

        ans+=   val * pow(10, i);

    }

    return ans;
}


bool isValid(int x, int y, int row, int col)
{
    return x >= 0 && y >= 0 && x < row && y < col;
}


int get_area (int src_x, int src_y, vector <string > vv)
{

    queue < pair <int, int > > q;
    q.push(make_pair (src_x, src_y));
    int row = vv.size();
    int col = vv[0].size();
    vector < vector < int > > pp (row+ 1, vector <int >(col+1, 0));

    int area = 0 ;
   

    while (!q.empty())
    {
        int srcX = q.front().first;
        int srcY =  q.front().second;
        q.pop();


        for (int i = 0 ; i < 8 ; i++)
        {

            int adj_x  = srcX + dx[i];
            int adj_y = srcY + dy[i] ;
            if ( isValid(adj_x, adj_y,row, col))
            {

                
                if (vv[adj_x][adj_y] == 'W')
                {
                

                    if (pp[adj_x][adj_y] == 0)
                    {
                        q.push(make_pair(adj_x, adj_y));
                        pp[adj_x][adj_y] = 1;
                        area++;
                    }
                }
            }

        }

    }

    return area;
}

int32_t main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;

    string str;
    while (tc--)

    {
        vector <string>  vv;
        while (true)
        {

            cin >> str;
            if (str[0] != 'L' and str[0]!= 'W')
                break;
            vv.push_back(str);

        }



        int src_x = getInt(str);
        cin >> str;
        int src_y = getInt(str);


        src_x--;
        src_y--;


        cout  <<  get_area(src_x, src_y,vv) <<endl;
        int i = 0;

        while (getline(cin,str) )
        {

            if (str.empty() && i!= 0)
                break;

            if ( i!= 0)
            {
                istringstream is2(str);
                is2>>src_x >>src_y;



                src_x--;
                src_y--;
                cout  <<  get_area(src_x, src_y,vv) <<endl;

            }




            i++;

        }

 
 cout << endl;


    }





    return 0;
}


