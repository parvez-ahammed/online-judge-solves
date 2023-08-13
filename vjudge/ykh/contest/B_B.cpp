#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"

int32_t main() {

FAST;
int tc;
cin >> tc;
while(tc--)
{

    int a , b , c;
cin >> a >> b >>c;
    if (a < b and a <c)
        cout << "First";
    else if (b <a and b <c)
    cout << "Second";
    else 
    cout << "Third";
    cout << endl;
}
    return 0;
}