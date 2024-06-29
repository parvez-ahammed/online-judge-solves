#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void genRandom()
{
    // find a random number n between 1 and 100000
    int n = 1 + rand() % 100000;
    cout << n << endl;

    // generate n random numbers between 1 and 1000000000
    for (int i = 0; i < n; i++) {
        cout << 1 + rand() % 1000000000 << " ";
    }
    cout << endl;

    // generate n random number between 1 and 12

    for (int i = 0; i < n; i++) {
        cout << 1 + rand() % 12 << " ";
    }
    cout << endl;

    // generate a random number q between 1 and 100000

    int q = 1 + rand() % 100000;
    cout << q << endl;

    // generate q queries
    for (int i = 0; i < q; i++) {
        int type = 1 + rand() % 2;
        cout << type << " ";
        if (type == 1) {
            cout << 1 + rand() % 12 << endl;
        } else {
            cout << 1 + rand() % 12 << " " << 1 + rand() % n << endl;
        }
    }
}

void genAllType2AndXZero()
{
    int n = 100;
    cout << n << endl;

    for (int i = 0; i < n; i++) {
        cout << 1 + rand() % 1000000000 << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << 1 + rand() % 12 << " ";
    }

    cout << endl;

    int q = 100;

    cout << q << endl;

    for (int i = 0; i < q; i++) {
        cout << 2 << " " << 1 + rand() % 12 << " " << 0 << endl;
    }
}
int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   

    genRandom();
    //genAllType2AndXZero();

   
    freopen("output.txt", "a", stdout);

    return 0;
}