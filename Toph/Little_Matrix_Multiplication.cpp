#include <bits/stdc++.h>

using namespace std;

void print_matrix(vector<vector<int>> vv)
{

    for (int i = 0; i < vv.size(); i++)
    {
        for (int j = 0; j < vv[i].size(); j++)
            cout << vv[i][j] << " ";
        cout << endl;
    }
}

vector<vector<int>> multiply_matrix(vector<vector<int>> A, vector<vector<int>> B)
{

    int p = A.size();
    int q = A[0].size();
    int r = B[0].size();

    vector<vector<int>> C(p, vector<int>(r, 0));

    for (int i = 0; i < p; i++)
        for (int j = 0; j < r; j++)
            for (int k = 0; k < q; k++)
                C[i][j] += A[i][k] * B[k][j];

    return C;
}

int main()
{

    vector<vector<int>> A;
    vector<vector<int>> B;

    for (int i = 0; i < 4; i++)
    {
        vector<int> row;

        int temp1, temp2;
        cin >> temp1 >> temp2;
        row.push_back(temp1);
        row.push_back(temp2);

        if (i < 2)
        {
            A.push_back(row);
        }
        else
            B.push_back(row);
    }

    vector<vector<int>> C = multiply_matrix(A, B);

    print_matrix(C);

    return 0;
}