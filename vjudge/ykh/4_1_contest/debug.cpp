#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
    using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> prime_num;
    for (int i = 2; i <= n; i++)
    {
        
        bool flag = true;
        for (int j = 2; j * j<= i; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            prime_num.push_back(i);
    }
    for (auto x : prime_num) cout << x << ' ';
    int ans = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j <= prime_num.size(); j++)
    //     {
    //         if (i % prime_num[j] == 0)
    //             count++;
    //     }
    //     if (count == 2)
    //         ans++;
    // }
    cout << ans << endl;
    return 0;
}