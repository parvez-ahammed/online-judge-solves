#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int countZero(int n)
{
    int cnt = 0;
    while (n > 0) {
        if (n % 2 == 0)
            cnt++;
        n /= 2;
    }
    return cnt;
}

int countOne(int n)
{
    int cnt = 0;
    while (n > 0) {
        if (n % 2 == 1)

            cnt++;

        n /= 2;
    }
    return cnt;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;

    cin >> a >> b;

    int aOne = countOne(a);
    int aZero = countZero(a);
    int bOne = countOne(b);
    int bZero = countZero(b);

    if (aOne == bOne && aZero == bZero)
        cout << "good" << endl;
    else
        cout << "bad" << endl;

    return 0;
}