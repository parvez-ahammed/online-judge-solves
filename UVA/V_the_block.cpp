#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

vector<vector<int>> v;
int n;

int locationOf(int x)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (v[i][j] == x) {
                return i;
            }
        }
    }
}

void clearTop(int a)
{
    int containsA = locationOf(a);

    int sz = v[containsA].size();

    for (int i = sz - 1; i >= 0; i--) {
        int val = v[containsA][i];

        if (val == a) {
            break;
        }

        v[containsA].pop_back();
        v[val].push_back(val);
    }
}

void moveOver(int a, int b)
{
    int containsA = locationOf(a);
    int containsB = locationOf(b);

    if (containsA == containsB) {
        return;
    }
    clearTop(a);

    v[containsB].push_back(a);
    v[containsA].pop_back();
}

void moveOnto(int a, int b)
{
    int containsA = locationOf(a);
    int containsB = locationOf(b);

    if (containsA == containsB) {
        return;
    }
    clearTop(b);
    moveOver(a, b);
}

void pileOver(int a, int b)
{
    int containsB = locationOf(b);
    int containsA = locationOf(a);

    if (containsA == containsB) {
        return;
    }
    int sz = v[containsA].size();
    vector<int> temp;

    for (int i = sz - 1; i >= 0; i--) {
        int val = v[containsA][i];
        v[containsA].pop_back();

        temp.push_back(val);

        if (val == a) {
            break;
        }
    }

    reverse(temp.begin(), temp.end());

    for (auto x : temp) {
        v[containsB].push_back(x);
    }
}

void pileOnto(int a, int b)
{
    clearTop(b);
    pileOver(a, b);
}

int32_t
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    v = vector<vector<int>>(n);

    for (int i = 0; i < n; i++) {
        v[i].push_back(i);
    }

    string cmd1;
    while (cin >> cmd1 and cmd1 != "quit") {
        int a, b;
        string cmd2;
        cin >> a >> cmd2 >> b;

        if (cmd1 == "move" and cmd2 == "onto") {
            moveOnto(a, b);
        }

        if (cmd1 == "move" and cmd2 == "over") {
            moveOver(a, b);
        }

        if (cmd1 == "pile" and cmd2 == "onto") {
            pileOnto(a, b);
        }

        if (cmd1 == "pile" and cmd2 == "over") {
            pileOver(a, b);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << i << ":";
        for (auto x : v[i]) {
            cout << " " << x;
        }

        cout << endl;
    }

    return 0;
}
