#include <bits/stdc++.h>
using namespace std;

// C++ program to check if a string is
// substring of other.
#include <bits/stdc++.h>
using namespace std;

// Returns true if s1 is substring of s2
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        int j;

        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return i;
    }

    return -1;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        string a;
        string b;
        int a_len, b_len;
        cin >> a_len >> b_len;
        cin >> a >> b;
        if (b_len <= a_len)
        {
            for (int i = 1; b_len >= 0; i++)
            {
                // cout << a[a_len - 1] << b[b_len - 1] << endl;
                if (a[a_len - 1] == b[b_len - 1])
                {

                    a_len--;
                    b_len--;

                    a.pop_back();
                    b.pop_back();
                    if (b_len == 0)
                    {
                        cout << "YES" << endl;
                        break;
                    }
                }
                else if (i == 1 && a[a_len - 1] != b[b_len - 1])
                {
                    if (b.size() != 1)
                        cout << "NO" << endl;
                    else if (b.size() == 1)
                    {
                        char ch = b[0];
                        int count_ch = count(a.begin(), a.end(), ch);
                        if (count_ch > 0)
                        {
                            cout << "YES" << endl;
                            break;
                        }

                        else
                        {
                            cout << "NO" << endl;

                            break;
                        }
                    }
                    break;
                }
                else if (b_len == 0)
                {
                    cout << "YES<" << endl;
                    break;
                }
                else
                {
                    // cout << "Hitted here third" << endl;
                    if (b_len == 1)
                    {
                        char ch = b[0];
                        int count_ch = count(a.begin(), a.end(), ch);
                        if (count_ch > 0)
                        {
                            cout << "YES" << endl;
                            break;
                        }

                        else
                        {
                            cout << "NO" << endl;

                            break;
                        }
                    }
                    else
                    {
                        cout << "NO" << endl;
                        break;
                    }
                }
            }
        }
    }
}
