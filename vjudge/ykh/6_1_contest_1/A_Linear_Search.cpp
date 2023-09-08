#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool ok(int n)
{
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum == 10;
}

int digit(int n)
{
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n /= 10;
    }
    return cnt;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin >> k;

    int MAX = 2e7 + 9;

    int cnt = 0;

    int prev = 0;

    vector<int> v;

    v.push_back(0);

    for (int i = 0; i < MAX; i++) {
        if (ok(i)) {
            // if (digit(i) > digit(prev)) {
            //     cout << endl;
            //     v.push_back( cnt - v.back() );
            // }

            //cout << i << " ";

            prev = i;

            cnt++;
        }


        if (cnt == k) {
            cout << i << endl;
            break;
        }
    }

    // print the vector 

    // for (auto i : v) {
    //     cout << i << " ";
    // }
    return 0;
}