#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<int> cost;
    int cost_val;

    queue<string> label;
    string label_val;

    for (int i = 0; i < n; i++)
    {
        cin >> cost_val;
        cost.push(cost_val);
    }

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> label_val;
        label.push(label_val);
    }

    int dailyCount = 0;
    cin >> dailyCount;

    string s1("legal");
    string s2("illegal");

    int maximum_cost = 0;

    int cost_arr[10001];
    int cost_counter = 0;

    while (!cost.empty())
    {
        maximum_cost = 0;
        for (int i = 0; i < dailyCount; i++)
        {
            while (!cost.empty())
            {
                if (label.front() == s1)
                {
                    label.pop();
                    maximum_cost += cost.front();
                    cost.pop();
                    break;
                }
                else if (label.front() == s2)
                {
                    label.pop();
                    if (n > 1)
                    {
                        maximum_cost += cost.front();
                    }

                    cost.pop();
                }
            }
        }
        cost_arr[cost_counter] = maximum_cost;
        cost_counter++;
    }

    sort(cost_arr, cost_arr + cost_counter, greater<int>());
    cout << cost_arr[0];

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl "\n"
#define ll long long
#define M 10001

int main()
{
    //fast
    fast;

    //code starts
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string x;
        cin>>x;
        if(x=="legal") b[i]=1;
        else b[i]=0;
    }

    int dc, s=0, sum=0, mx=0;
    cin>>dc;
    for(int i=0;i<n;i++)
    {
        s+=b[i];
        sum+=a[i];
        if(s==dc)
        {
            mx=(sum>mx)?sum:mx;
            s=sum=0;
        }
    }

    cout<<mx<<nl;
    return 0;
}