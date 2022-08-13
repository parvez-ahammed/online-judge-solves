#include <bits/stdc++.h>

using namespace std;
typedef pair<int, vector<int>> src_des;
int main()
{
    int n, m;

    cin >> n >> m;
    vector<int> empty;
    //* initializing the vecotor in the sequence of occurance , index , connected nodes
    vector<pair<int, src_des>> occurances(n, make_pair(0, make_pair(0, empty)));

    for (int i = 0; i < occurances.size(); i++)
    {
        occurances[i].second.first = i;
    }

    char temp_1;
    char temp_2;
    for (int i = 0; i < m; i++)
    {
        cin >> temp_1 >> temp_2;
        occurances[temp_1 - 65].first++; //* incresing occurances of both inputs
        occurances[temp_2 - 65].first++;
        occurances[temp_1 - 65].second.second.push_back(temp_2 - 65); //* connecting them to each other in the connected node vector
        occurances[temp_2 - 65].second.second.push_back(temp_1 - 65);
    }
    sort(occurances.begin(), occurances.end(), greater<>()); //* sorting to find the maximum occurances

    //* To check the current status of the occurance vector
    // for (int i = 0; i < occurances.size(); i++)
    // {
    //     cout << occurances[i].first << " " << occurances[i].second.first << " " << occurances[i].second.second.size() << endl;
    // }
    // cout << " OCcurance vector is " << endl;
    // for (int i = 0; i < occurances.size(); i++)
    // {
    //     cout << occurances[i].first << " ";
    // }
    // cout << endl;

    int remove_count = 0; //* total needed amount of removing
    for (int i = 0; i < occurances.size(); i++)
    {
        if (i == 0 && occurances[i].first == 1)
        {
            break;
        }
        else if (occurances[i].first > 0) //* if some node occurs multiple time
        {
            remove_count++; //* increasing remove count
            // cout << "Removing for " << occurances[i].second.first << endl;
            int on_top_is = 0;
            while (!occurances[i].second.second.empty()) //* disconnecting all the nodes
            {
                on_top_is = occurances[i].second.second[0];
                // cout << "Value of on top is " << on_top_is << endl;

                for (int i = 0; i < occurances.size(); i++)
                {
                    if (occurances[i].second.first == on_top_is) //* checking if this is the connected node then decresing the occurance
                    {
                        occurances[i].first -= 1;
                    }
                }
                occurances[i].first -= 1;                                               //* decresing the occurance
                occurances[i].second.second.erase(occurances[i].second.second.begin()); //* to get the next conected node
            }

            // cout << "Current top occurance is " << occurances[i].first << " OCcurance vector is " << endl;
            // for (int i = 0; i < occurances.size(); i++)
            // {
            //     cout << occurances[i].first << " ";
            // }
            // cout << endl;
        }
        else
            break;
    }

    if (n - remove_count == 2)
    {
        cout << 3 << endl;
    }
    else
        cout << n - remove_count << endl;
}

/*

test cases
4 5
A B
B C
C D
D A
D B


6 2
A B
B E


6 5
A B
B E
C B
D B
B F

10 6
A B
B E
C B
D B
A F
F B

10 4
B A
F D
B E
E D


4 5
A B
B C
C D
D A
D B

4 6
A B
B C
C D
D A
D B
C A


*/
