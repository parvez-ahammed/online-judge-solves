// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define FAST                          \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);
// #define endl "\n"
// vector<string> path;

// void checkForAdd(string temp)
// {
//     if (temp.length() > 0)
//     {
//         if (temp == "..")
//         {
//             if (path.size() > 0)
//                 path.pop_back();
//         }
//         else
//             path.push_back(temp);
//         temp = "";
//     }
// }
// int32_t main()
// {

//     FAST;
//     int instructions;
//     cin >> instructions;
//     string cmd;

//     while (instructions--)
//     {

//         cin >> cmd;

//         if (cmd == "pwd")
//         {

//             stack<string> temp;

//             for (auto x : path)
//                 cout << "/" << x;

//             cout << "/" << endl;
//         }
//         else
//         {

//             string s;
//             cin >> s;

//             if (s[0] == '/')
//                 path.clear();

//             string temp = "";
//             for (int i = 0; i < s.length(); i++)
//             {
//                 if (s[i] == '/')
//                 {
//                     checkForAdd(temp);
//                     temp = "";
//                 }
//                 else
//                 {
//                     temp += s[i];
//                 }
//             }

//             checkForAdd(temp);
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"

stack<string> path;
void checkForAdd(string temp)
{
    if (temp.length() > 0)
    {
        if (temp == "..")
        {
            if (path.size() > 0)
                path.pop();
        }
        else
            path.push(temp);
        temp = "";
    }
}
int32_t main()
{

    FAST;
    int instructions;
    cin >> instructions;
    string cmd;

    while (instructions--)
    {

        cin >> cmd;

        if (cmd == "pwd")
        {

            stack<string> temp;

            while (!path.empty())
            {
                temp.push(path.top());
                path.pop();
            }

            while (!temp.empty())
            {
                cout << "/" << temp.top();
                path.push(temp.top());
                temp.pop();
            }

            cout << "/" << endl;
        }
        else
        {

            string s;
            cin >> s;

            if (s[0] == '/')

            {
                path = stack<string>();
            }

            string temp = "";
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '/')
                {
                    checkForAdd(temp);
                    temp = "";
                }
                else
                {
                    temp += s[i];
                }
            }

            checkForAdd(temp);
        }
    }
    return 0;
}