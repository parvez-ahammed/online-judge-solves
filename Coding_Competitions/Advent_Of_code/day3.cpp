#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

ll ANS = 0;
vector<string> v;
vector<string> starPositionMatrix;

int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, 1, -1, -1, 1 };

bool isValid(int i, int j)
{
    return i >= 0 and i < v.size() and j >= 0 and j < v[i].size();
}

bool check(int i, int j)
{

    // cout << i << " " << j << endl;
    for (int k = 0; k < 8; k++) {
        int x = i + dx[k];
        int y = j + dy[k];

        if (isValid(x, y)) {
            if (!isdigit(v[x][y]) and v[x][y] != '.')
                return true;
        }
    }

    return false;
}
void processRow(string s, int row)
{
    for (int j = 0; j < s.size();) {

        string temp = "";

        bool valid = false;

        while (j < s.size() and isdigit(s[j])) {
            temp += s[j];
            if (!valid)
                valid = check(row, j);

            j++;
        }

        if (temp.size() > 0) {

            if (valid) {

                ANS += stoi(temp);
            }
        }

        j++;
    }

    cout << endl;
}

void solve_part1()
{

    for (int i = 0; i < v.size(); i++) {
        processRow(v[i], i);
    }
}

int getNumberCount(int i, int j)
{

    vector<string> temp = v;

    // replace each digit with A

    for (int k = 0; k < temp.size(); k++) {
        for (int l = 0; l < temp[k].size(); l++) {
            if (isdigit(temp[k][l]))
                temp[k][l] = 'A';
        }
    }
    int cnt = 0;
    for (int k = 0; k < 8; k++) {
        int x = i + dx[k];
        int y = j + dy[k];

        if (isValid(x, y)) {
            if (temp[x][y] == 'A') {
                cnt++;

                for (int m = y; m < temp[x].size(); m++) {
                    if (temp[x][m] == 'A')
                        temp[x][m] = 'B';
                    else
                        break;
                }

                for (int m = y - 1; m >= 0; m--) {
                    if (temp[x][m] == 'A')
                        temp[x][m] = 'B';
                    else
                        break;
                }
            }
        }
    }

    return cnt;
}
pair<string, string> findOneNumber(string s, int row)
{
    string temp = "";

    //cout << "s: " << s << endl;
    for (int j = 0; j < s.size();) {

        temp = "";

       

        while (j < s.size() and s[j] == 'B') {
            temp += v[row][j];
            s[j] = 'T';

            j++;
        }

        if (temp.size() > 0) {

            //cout << temp << endl;
            return { temp, s };
        }

        j++;
    }

    return { "", s };
}
void calculateStar(int i, int j)
{

    vector<string> temp = v;

    // replace each digit with A

    for (int k = 0; k < temp.size(); k++) {
        for (int l = 0; l < temp[k].size(); l++) {
            if (isdigit(temp[k][l]))
                temp[k][l] = 'A';
        }
    }

    int cnt = 0;
    for (int k = 0; k < 8; k++) {
        int x = i + dx[k];
        int y = j + dy[k];

        if (isValid(x, y)) {
            if (temp[x][y] == 'A') {
                cnt++;

                for (int m = y; m < temp[x].size(); m++) {
                    if (temp[x][m] == 'A')
                        temp[x][m] = 'B';
                    else
                        break;
                }

                for (int m = y - 1; m >= 0; m--) {
                    if (temp[x][m] == 'A')
                        temp[x][m] = 'B';
                    else
                        break;
                }
            }
        }
    }


    vector<string> numbers;

    for (int i = 0; i < temp.size(); i++) {
        auto s = findOneNumber(temp[i], i);
        //cout << s.second << endl;
        auto ss = findOneNumber(s.second, i);
        //cout << ss.second << endl;

        if (s.first.size() > 0)
            numbers.push_back(s.first);
        
        if (ss.first.size() > 0)
            numbers.push_back(ss.first);
    }
    ll mul = 1;
    for (auto s : numbers) {

        mul *= stoi(s);
    }

    ANS += mul;
}
void generateStarPositionMatrix()
{

    vector<pair<int, int>> starPosition;
    for (int i = 0; i < v.size(); i++) {
        string temp = "";
        for (int j = 0; j < v[i].size(); j++) {
            if (v[i][j] == '*') {
                int numberCount = getNumberCount(i, j);
                if (numberCount == 2) {
                    starPosition.push_back({ i, j });
                }
            }
        }
        starPositionMatrix.push_back(temp);
    }

    for (auto [x, y] : starPosition) {
        //cout << x << " " << y << endl;
        calculateStar(x, y);
    }
}
void solve_part2()
{
    generateStarPositionMatrix();
}
void solve()
{

    string s;

    while (cin >> s) {
        v.push_back(s);
    }

    // solve_part1();
    solve_part2();

    cout << ANS << endl;
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}