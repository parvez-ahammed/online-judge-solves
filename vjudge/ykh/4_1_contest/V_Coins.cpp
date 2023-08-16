#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int32_t main()
{

    FAST;

    int n, s;
    cin >> n >> s;

    if (s%n == 0)
    {
        cout << s/n << endl;
    }
    else{
          cout << (s / n) + 1 << endl;

    }


    

  
}