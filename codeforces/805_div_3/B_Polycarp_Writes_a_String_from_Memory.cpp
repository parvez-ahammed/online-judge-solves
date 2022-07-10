#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**----data type----*/
#define ll long long int
#define llu unsigned long long int

/**----Functions to use----**/

ll powerLog(ll base, ll power)
{
    ll res = 1;
    while (power)
    {
        if (power % 2)
        {
            res *= base;
            power--;
        }
        else
        {
            base *= base;
            power /= 2;
        }
    }
    return res;
}

string unique(string s)
{
    string str;
    int len = s.length();

    for (int i = 0; i < len; i++)
    {

        char c = s[i];
        auto found = str.find(c);
        if (found == std::string::npos)
        {

            str += c;
        }
    }
    return str;
}

int main()
{

    int tc;
    cin >> tc;

    while (tc--)
    {
        string str;

        cin >> str;

        //    cout<< setw(4)<<str.size() << " ";

        //     str = unique(str);

        //     cout << str.size() << " ";

        //     double days = ceil (str.size() / 3.0);

        int days = 0;
        // cout << days <<endl;

        // cout << str << endl;

        string str2;

        int unique_pushed = 0;
        int size = str.size();

        vector<char> v;
        vector<char> empty;

        while (str.size() > 0)
        {
            if (str.size() >= 3)
            {

                do
                {
                    char key1 = str[0];
                    char key2 = str[1];
                    char key3 = str[2];

                    if (key1 != key2 && key1 != key3 && key2 != key3)

                    {
                        for (int i = 3 ; i < str.size() ;i++)
                        str.erase(0, 1);
                        str.erase(0, 1);
                        str.erase(0, 1);
                       
                    }

                    // if (!count(v.begin(), v.end(), str[0]))
                    // {
                    //     v.push_back(str[0]);
                    //     str.erase(0, 1);
                    //     unique_pushed += 1;
                    // }
                    // else
                    // {
                    //     v.push_back(str[0]);
                    //     str.erase(0, 1);
                    // }

                    // if (unique_pushed == 3)
                    // {
                    //     if (!count(v.begin(), v.end(), str[0]))
                    //     {
                    //         break;
                    //     }
                    // }

                } while (true);

                // cout << str<<endl;
                days += 1;
                v = empty;
                unique_pushed = 0;
            }
            else
            {
                days += 1;
                break;
            }

            //     // cout << "\nStr size " << str.size() << endl;

            //     // if (days == 3)
            //     // {
            //     //     cout << str <<  " "<<str.size();
            //     //     break;
            //     // }
        }

        cout << days << endl;
    }

    return 0;
}