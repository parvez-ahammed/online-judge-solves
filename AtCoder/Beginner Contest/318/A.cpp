#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int N;
string str;
vector<int> ones, zeros;

void processGreater()
{
    int cnt = 0;

    for (int i = 0; i < N; i++) {

        cnt += (str[i] == '>' ? (-1 * cnt) : 1);
        zeros.push_back(cnt);
    }
}

void processSmaller()
{
    int cnt = 0;

    for (int i = N - 1; i >= 0; i--) {
        cnt += (str[i] == '<' ? (-1 * cnt) : 1);
        ones.push_back(cnt);
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> str;
    N = str.size();
    zeros.push_back(0);

    processGreater();
    processSmaller();

    reverse(ones.begin(), ones.end());
    ones.push_back(0);

    ll sum = 0;

    int sz = ones.size();
    for (int i = 0; i < sz; i++) {
        sum += max(ones[i], zeros[i]);
    }

    cout << sum << endl;

    return 0;
}
// >><<<>>
// 2>1>0<1<2<3>1>0
// 2>1>0<<<>>
// 1100011
// 21000210

// >>>>>0
// 0<<<<<<<
// 1100011

// 21000210
// 00012300



#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int N;
string str;
void print(vector<int> v)
{
    int sz = v.size();
    for (int i = 0; i < sz; i++)
        cout << v[i] << " ";
    cout << endl;
}

vector<int> ones, zeros;

void processZero()
{
    int cnt = 0;

    for (int i = 0; i < N; i++) {

        if (str[i] == '1') {
            cnt = 0;
            zeros.push_back(cnt);

        } else {
            cnt++;
            zeros.push_back(cnt);
        }
    }
}

void processOne()
{
    int cnt = 0;

    for (int i = N - 1; i >= 0; i--) {

        if (str[i] == '0') {
            cnt = 0;
          

        } else {
            cnt++;
           
        }
          ones.push_back(cnt);
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> str;
    N = str.size();
    zeros.push_back(0);
    for (int i = 0; i < N; i++)
        str[i] = (str[i] == '>' ? '1' : '0');

    processZero();
    processOne();

    reverse(ones.begin(), ones.end());
    ones.push_back(0);

    //print(zeros);
    //print(ones);

    ll sum = 0;

    int sz = ones.size();
    for (int i = 0; i < sz; i++) {
        sum += max(ones[i], zeros[i]);
    }

    cout << sum << endl;

    return 0;
}