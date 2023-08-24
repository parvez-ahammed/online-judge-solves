#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

int32_t main()
{

    FAST;
    int qeuery;
    cin >> qeuery;

    queue<int> q;

    while (qeuery--)
    {
        int type, id;
        cin >> type >> id;

        if (type == 1)
        {
            q.push(id);
        }
        else
        {
            int leaving = q.front();
            q.pop();
            (leaving == id) ? cout << "Yes" : cout << "No";
            cout << endl;
        }
    }
    return 0;
}