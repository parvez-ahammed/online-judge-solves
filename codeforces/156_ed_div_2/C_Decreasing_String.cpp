#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
double px, py, ax, ay, bx, by;

string s;
int pos;

int isSubstring(string s1, string s2)
{

    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}

char getAns()
{
    vector<string> v;

    int n = s.size();
    map<char, int> freq;

    for (int i = 0; i < n; i++) {
        freq[s[i]]++;
    }

    v.push_back(s);
    string temp = "";

    for (int i = n - 1; i > 0; i--) {

        for (char ch = 'a'; ch <= 'z'; ch++) {

            if (freq[ch] > 0) {

                string tempF = temp;
                string tempB = temp;

                tempF.insert(tempF.begin(), ch);
                tempB.insert(tempB.end(), ch);

                // check are they substring of s

                bool tempFSub = isSubstring(tempF, s) != -1;
                bool tempBSub = isSubstring(tempB, s) != -1;

                if (!tempFSub and !tempBSub) {
                    continue;
                } else if (tempFSub and tempBSub) {

                    if (tempFSub < tempBSub) {
                        temp.insert(temp.begin(), ch);
                        freq[ch]--;
                        break;
                    } else {
                        temp.insert(temp.end(), ch);
                        freq[ch]--;
                        break;
                    }

                } else if (tempFSub) {
                    temp.insert(temp.begin(), ch);
                    freq[ch]--;
                    break;
                } else if (tempBSub) {
                    temp.insert(temp.end(), ch);
                    freq[ch]--;
                    break;
                }
            }
        }

        //cout << temp << endl;
        v.push_back(temp);
    }

    sort(v.rbegin(), v.rend());

    string ans = "";

    for (auto x : v) {

        ans += x;

       cout << x << " ";
    }
    cout << endl;

    return ans[pos];
}

void solve()
{

    cin >> s >> pos;

    int n = s.size();

    --pos;
    cout << getAns() ;
   // cout << endl;
}

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }
    return 0;
}
// dacb
// acb
// ab
// a