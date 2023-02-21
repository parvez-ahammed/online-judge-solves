#include <bits/stdc++.h>
using namespace std;

#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())


void solve(int n)
{

    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {

        vector<int> v;
        for (int j = 0; j < 5; j++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        Sort(v);

        string str = "";

        for (int j = 0; j < 5; j++)
        {
            //cout << v[j] << " ";
            str += to_string(v[j]);
        }
        //cout << endl;
        mp[str]++;
    }
    

    vector <int> occur;

    for (auto itr = mp.begin(); itr != mp.end(); ++itr)
    {
        occur.push_back(itr->second); 
    }

    SortR(occur);
    int top_val =occur[0];

    int occurance = 0;
     
    for(int i = 0 ;i < occur.size() ; i++)
    {
        if (occur[i] == top_val)
            occurance++;
    }

    cout << top_val * occurance << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    while (cin >> n && n != 0)
    {
        solve(n);
    }
    return 0;
}