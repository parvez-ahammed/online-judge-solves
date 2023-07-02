#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    stack <int> s;
    int temp = 0;

    while (n--)
    {
        cin >> temp;
        s.push(temp);
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}