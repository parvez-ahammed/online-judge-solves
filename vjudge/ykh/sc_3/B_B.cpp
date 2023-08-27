#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int  n , x;
    cin >> n >> x;

    vector <int > v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort (v.begin() , v.end());


    int cnt = 0;
   for (int i = 0; i < n; i++)
   {

        if (x - v[i] >= 0)
        {
            cnt++;
            x -= v[i];
        }
        else
        {
            break;
        }

   }

   cout << cnt << endl;
    return 0;
}