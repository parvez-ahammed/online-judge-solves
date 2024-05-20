#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> vec = { 'H', 'e', 'l', 'l', 'o' };
    string str(vec.begin(), vec.end());

    str += '!';
    str = str + '!';
    str.append(1, '!');

    cout << "String from vector: " << str << endl;

    return 0;
}
