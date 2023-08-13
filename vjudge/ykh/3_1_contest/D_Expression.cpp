#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;

    int first = a * b * c;
    int second = a + b + c;

    int third = (a * b) + c;
    int fourth = a + (b * c);

    int fifth = (a + b) * c;
    int sixth = a * (b + c);
    
    

    cout << max(first, max(second, max(third, max(fourth, max(fifth , sixth)))));
    return 0;
}