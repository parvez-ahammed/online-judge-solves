#include <bits/stdc++.h>
using namespace std;
/**----data type----*/
#define ll long long int
#define llu unsigned long long int
#define Sort(x) sort(x.begin(), x.end())
#define SortR(x) sort(x.begin(), x.end(), greater<int>())
#define Reverse(x) reverse(x.begin(), x.end())
#define sq(x) (x) * (x)
#define mid(l, r) (l + (r - l) / 2)
#define binary_of(x) (bitset<32>(x).to_string().substr(32 - log2(x)))
int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1};

// C++ program of the above approach
#include <algorithm>
#include <iostream>

string set_string(string a)
{
    if (a[a.size() - 1] == 'S')
        a[a.size() - 1] = '1';
    else if (a[a.size() - 1] == 'M')
        a[a.size() - 1] = '2';
    else
        a[a.size() - 1] = '3';
    return a;
}

string removeChar(string s, char c)
{

    string new_str = "";
}

void greater_v()
{
    cout << ">"
         << "\n";
}

void smaller()
{
    cout << "<"
         << "\n";
}

void equal()
{
    cout << "="
         << "\n";
}

void solve()
{
    string a, b;
    cin >> a >> b;
    int temp = 0;

    int a_x = a.size() - 1, b_x = b.size() - 1;

    a = a[a.size() - 1];
    b = b[b.size() - 1];

    // cout << a << " " << b << "\n";
    if (a == b)
    {
        if (a == "L")
        {
            if (a_x > b_x)
                greater_v();
            else if (a_x == b_x)
                equal();
            else
                smaller();
        }

        else
        {
            if (a_x < b_x)
                greater_v();
            else if (a_x == b_x)
                equal();
            else
                smaller();
        }
    }

    else
    {
        if (a == "L" && (b == "S" || b == "M"))
            greater_v();
        else if (a == "S" && (b == "L" || b == "M"))
            smaller();
        else if (a == "M" && b == "L")
            smaller();
        else if (a == "M" && b == "S")
            greater_v();
        else
            cout << "yet" << endl;
    }
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}