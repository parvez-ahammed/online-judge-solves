#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"

int32_t main() {

FAST;

int n ;
cin >>  n ;
double res = 0;
float temp ;
for (int i = 0 ; i < n ;i++)
{
    cin >> temp;

    res += (temp /100);


}

cout << fixed << setprecision(6) <<  (res  * 100)/n << endl;

 return 0;
}