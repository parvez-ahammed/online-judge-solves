#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int result = 0;
    while (s.size() > 1)
    {
        result++;
        long long sum = 0;
        for (int i = 0; i < s.size(); i++)
            sum += s[i] - '0';
            
        s = to_string(sum);
    }

    cout << result << endl;
}