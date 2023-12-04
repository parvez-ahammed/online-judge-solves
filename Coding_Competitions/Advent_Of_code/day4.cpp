#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

ll ANS = 0;

vector<vector<int>> WINNING_CARDS, OWNINGS_CARDS;

void validityParser(int);
void cardParser()
{
    int cardNum = 0;
    cin >> cardNum;
    // cout << cardNum;

    // ignore the colons
    char colon;
    cin >> colon;
    // cout << colon << " ";

    // combinationParser_part1(gameNum);
    validityParser(cardNum);
}

void calculateAnswer(vector<int> winning, vector<int> ownings)
{
    WINNING_CARDS.push_back(winning);
    OWNINGS_CARDS.push_back(ownings);
}
void validityParser(int cardNum)
{

    string s;
    vector<int> winning, ownings;
    bool poleNotOccured = true;
    while (cin >> s) {

        if (s == "Card") {

            calculateAnswer(winning, ownings);

            // cout << endl;
            // cout << s << " ";

            winning.clear();
            ownings.clear();

            cardParser();

            break;
        }

        if (s == "|")
            poleNotOccured = false;
        else {
            if (poleNotOccured)
                winning.push_back(stoi(s));
            else
                ownings.push_back(stoi(s));
        }

        // cout << s << " ";
    }
    if (winning.size() > 0)
        calculateAnswer(winning, ownings);
}

vector<int> getMatchingCount()
{
    vector<int> matchingCount;

    for (int i = 0; i < WINNING_CARDS.size(); i++) {
        map<int, int> mp;
        for (int j = 0; j < WINNING_CARDS[i].size(); j++)
            mp[WINNING_CARDS[i][j]]++;

        int cnt = 0;
        for (int j = 0; j < OWNINGS_CARDS[i].size(); j++)
            cnt += (mp[OWNINGS_CARDS[i][j]] > 0);

        matchingCount.push_back(cnt);
    }

    return matchingCount;
}
void calculateAnwer_part1()
{

    // cout << " CNT " << cnt << endl;
    vector<int> matchingCount = getMatchingCount();

    for (int i = 0; i < matchingCount.size(); i++)
        if (matchingCount[i] > 0)
            ANS += (1 << (matchingCount[i] - 1));
}

void calculateAnswer_part2()
{
    vector<int> matchingCount = getMatchingCount();

    vector<int> ans (matchingCount.size(), 1);
    for (int i = 0; i < matchingCount.size(); i++)
        {
            for (int j = i+1 ; j <= i + matchingCount[i]  ; j++)
            {
                ans[j] += ans[i];
            }
        }

    for (int i = 0; i < ans.size(); i++)
    {
       // cout << ans[i] << " ";

        ANS += ans[i];

    }
        
    cout << endl;
}
void solve()
{

    string s;
    cin >> s;
    // cout << s << " ";
    cardParser();

    // calculateAnwer_part1();
    calculateAnswer_part2();

    cout << "\nANS = " << ANS << endl;
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

