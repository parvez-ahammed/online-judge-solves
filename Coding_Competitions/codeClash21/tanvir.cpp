#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

vector<pair<int, int>> vec[100];

int main()
{
    int node, edge;
    cout << "Enter the number of nodes : ";
    cin >> node;

    cout << "Enter the number of edges : ";
    cin >> edge;

    for (int i = 0; i < edge; i++)
    {
        int source, des, we;
        cout << "Source : ";
        cin >> source;
        cout << "Destination : ";
        cin >> des;
        cout << "Weight : ";
        cin >> we;
        vec[source].push_back(make_pair(des, we));
    }
    cout << endl;

    for (int i = 0; i < edge; i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << "Node: " << i << "\t"
                 << "Connected To: " << vec[i][j].first << "\t"
                 << "And Weight :" << vec[i][j].second << endl;
            cout << endl;
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < node; i++)
    {
        sort(vec[i].begin(), vec[i].end());
    }

    cout << "Sorted :" << endl
         << endl;
    for (int i = 0; i < edge; i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << "Node: " << i << "\t"
                 << "Connected To: " << vec[i][j].first << "\t"
                 << "And Weight :" << vec[i][j].second << endl;
            cout << endl;
        }
        cout << endl;
    }

    cout << endl
         << endl;

    getch();
}