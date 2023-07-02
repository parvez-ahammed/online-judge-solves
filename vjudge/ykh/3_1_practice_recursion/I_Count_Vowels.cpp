#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(start, x) for (int i = start; i < x; i++)

bool isVowel(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int vowelCount(string s, int n)
{
    if (n == s.size())
        return 0;

    if (isVowel(s[n]))
        return 1 + vowelCount(s, ++n);
    else
        return vowelCount(s, ++n);

    
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin, s);

    cout << vowelCount(s, 0) << endl;
    return 0;
}