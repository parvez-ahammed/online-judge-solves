#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


ll getNthUglyNo(int uglyNumber)
{

    int k = 0 ; 

    int twoPow = 0 , threePow = 0 , fivePow = 0 ;

    ll ugly[uglyNumber];

    ll nextMultipleOf2 = 2;
    ll nextMultipleOf3 = 3;
    ll nextMultipleOf5 = 5;

    ll nextUglyNo = 1;
    ugly[0] = nextUglyNo;

    for (int i = 1; i < uglyNumber; i++) {

        nextUglyNo = min(nextMultipleOf2, min(nextMultipleOf3, nextMultipleOf5));

        ugly[i] = nextUglyNo;

        //cout << ugly[i] << " ";

        if (nextUglyNo == nextMultipleOf2) {
            twoPow++;
            nextMultipleOf2 = ugly[twoPow] * 2;
        }
        if (nextUglyNo == nextMultipleOf3) {
            threePow++;
            nextMultipleOf3 = ugly[threePow] * 3;
        }
        if (nextUglyNo == nextMultipleOf5) {
            fivePow++;
            nextMultipleOf5 = ugly[fivePow] * 5;
        }
    }

    return nextUglyNo;
}
void solve() {

    int uglyNumber = 1500;
    cout <<"The 1500'th ugly number is ";
    cout << getNthUglyNo(uglyNumber)<< "."<< endl;
 }
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}