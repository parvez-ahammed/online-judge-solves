
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <string>
typedef long long ll;

int main()
{
    ll n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // cout << "EASY" <<endl;

    // cout << ((k*l) / n )  << " " << (c*d) << " " << (p/np);

    // min( ((k*l) / n )  , (c*d) , << (p/np));

    // cout << min( ((k*l) / n )  , (c*d) , (p/np));
    // cout << min( (((k*l) / n ) /n)  , ((c*d) /n) );

    cout << min(min((((k * l) / nl) / n), ((c * d) / n)), ((p / np) / n));

    return 0;
}