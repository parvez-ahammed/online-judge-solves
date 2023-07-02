#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long a, b, c, d;

    cin >> a >> b >> c >> d;

    long long st = max(a, c);
    long long en = min(b, d);

    st <= en ? cout << st << " " << en : cout << -1 << endl;

 
}