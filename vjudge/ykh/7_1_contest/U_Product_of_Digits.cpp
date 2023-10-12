#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // the concept is cool as we have to think about 2-9 only as they are the only digits available to us 
    // 0 is not a positive number 
    // single digit number is automatically entered
    // this works just like primeFactoriztion with compression as 3*3 = 9 , 2*2*2 = 8 , 2*2= 4 , so while adding them they are autmatically compressed

    int n;
    cin >> n;

    if (n == 0) {
        cout << "10" << endl;
        return 0;
    }
    if (n < 10) {
        cout << n << endl;
        return 0;
    }

    vector<int> digits;

    for (int i = 9; i >= 2; i--) {
        while (n % i == 0) {
            n /= i;
            digits.push_back(i);
        }
    }

    sort(digits.begin(), digits.end());

    if (n == 1) {
        for (auto i : digits)
            cout << i;
        cout << endl;
    } else
        cout << "-1" << endl;

    return 0;
}