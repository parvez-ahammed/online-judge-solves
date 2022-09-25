
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <string>

void findAndReplaceAll(std::string & data, std::string toSearch, std::string replaceStr)
{
    // Get the first occurrence
    size_t pos = data.find(toSearch);
    // Repeat till end is reached
    while( pos != string::npos)
    {
        // Replace this occurrence of Sub String
        data.replace(pos, toSearch.size(), replaceStr);
        // Get the next occurrence from the current position
        pos =data.find(toSearch, pos + replaceStr.size());
    }
}


int main()
{
    string str;

    cin >> str;

    findAndReplaceAll(str, "WUB", " ");
    
    for (int i = 0 ; i <str.size() ; i++)
    {
        if (str[i] == ' ' && str[i] == str[i+1])
        {
            str[i+1] = '0';
        }
    }

    str.erase(std::remove(str.begin(), str.end(), '0'), str.end());
     cout << str;
    
   
    return 0;
}