#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int size = s.size();
    int freq[10] = {0};

    for (int i = 0; i < size; i++)
    {
        freq[s[i] - 48]++;
    }

    int max = 0, position;
    for (int i = 9; i >= 0; i--)
    {
        if (freq[i] >= max)
        {
            max = freq[i];
            position = i;
        }
    }

    cout << position << endl;
}
