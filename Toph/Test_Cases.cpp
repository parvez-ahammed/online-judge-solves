#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, cpul, meml;

    cin >> n >> cpul >> meml;

    string verdict = "AC";
    while (n--)
    {

        int di, cpui, memi;

        cin >> di >> cpui >> memi;

        string cle = "CLE";
        string ac = "AC";
        string wa = "WA";
        string mle = "MLE";

        if (verdict == ac)
        {
            if (cpui > cpul)
                verdict = cle;
            else if (memi > meml)
                verdict = mle;
            else if (di != 0)
                verdict = wa;
            else
                verdict = ac;
        }
    }
    cout << verdict << endl;
    return 0;
}