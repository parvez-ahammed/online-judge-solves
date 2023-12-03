#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const int N = 1e5 + 5;
vector<vector<int>> v(N, vector<int>(4, 0));

ll ANS = 0;

bool checkCombination(int redCount, int blueCount, int greenCount)
{

    //cout << redCount << " " << blueCount << " " << greenCount << endl;
    return redCount <= 12 and greenCount <= 13 and blueCount <= 14;
}
void combinationParser_part2(int gameNum)
{

    int redCount = 0, blueCount = 0, greenCount = 0;

    bool alCombinationValid = true;

    int mxRed = 0, mxBlue = 0, mxGreen = 0;

    while (true)

    {
        int ballCount = 0;
        string color = "";
        cin >> ballCount >> color;
        // cout << ballCount << " " << color << " ";

        string temp = color;

        if (!isalpha(temp.back()))
            temp.pop_back();

        if (temp == "red")
            redCount += ballCount;
        else if (temp == "blue")
            blueCount += ballCount;
        else if (temp == "green")
            greenCount += ballCount;

        if (color.back() == ';' or isalpha(color.back())) {
            mxRed = max(mxRed, redCount);
            mxBlue = max(mxBlue, blueCount);
            mxGreen = max(mxGreen, greenCount);
            redCount = 0;
            blueCount = 0;
            greenCount = 0;
        }

        if (isalpha(color.back()))
            break;
    }

    // if (alCombinationValid)
    //     cout << gameNum << endl;

    ANS += (mxRed* mxBlue* mxGreen);
}
void combinationParser_part1(int gameNum)
{

    int redCount = 0, blueCount = 0, greenCount = 0;

    bool alCombinationValid = true;

    while (true)

    {
        int ballCount = 0;
        string color = "";
        cin >> ballCount >> color;
        // cout << ballCount << " " << color << " ";

        string temp = color;

        if (!isalpha(temp.back()))
            temp.pop_back();

        if (temp == "red")
            redCount += ballCount;
        else if (temp == "blue")
            blueCount += ballCount;
        else if (temp == "green")
            greenCount += ballCount;

        if (color.back() == ';' or isalpha(color.back())) {
            if (alCombinationValid)
                alCombinationValid = checkCombination(redCount, blueCount, greenCount);
            redCount = 0;
            blueCount = 0;
            greenCount = 0;
        }

        if (isalpha(color.back()))
            break;
    }

    // if (alCombinationValid)
    //     cout << gameNum << endl;

    ANS += (alCombinationValid ? gameNum : 0);
}
void gameParser()
{
    int gameNum = 0;
    cin >> gameNum;
    // cout << gameNum;

    // ignore the colons
    char colon;
    cin >> colon;
    // cout << colon << " ";

    // combinationParser_part1(gameNum);
    combinationParser_part2(gameNum);
}
void solve()
{

    string s;

    while (cin >> s) {
        if (s == "Game") {
            // cout << endl;
            // cout << s << " ";
            gameParser();
        }

        // cout << s << " ";
    }

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