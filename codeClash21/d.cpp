#include <bits/stdc++.h>
using namespace std;

#define mp make_pair

int sum_of_all = 0;           // total sum of all the elements
int sum_wanted = 0;           // the sum wanted form the subsets
int maximum_possible_sum = 0; // maximum possible sum of the set
int minimum_possible_sum = 0; // minimum possible sum of the set

bool negative_exits = false; // checking for negative element
bool positive_exits = false; // checking for positive element

typedef vector<int> v_int;
typedef pair<int, v_int> vi;
typedef pair<int, vi> vii;
typedef pair<int, vii> viii;
// storing  sum ,  level , sum in hand , route
stack<viii> s;
// storing value and initial given indices
vector<pair<int, int>> user_input;

void push_into_stack()
{
    v_int route(user_input.size(), 0);
    s.push(mp(0, mp(0, mp(sum_of_all, route))));
    int curr_key;
    int curr_level;
    int curr_sum;
    v_int curr_route;
    int value_indice;
    
    bool found = false;
    while (!s.empty())
    {
        int number_of_1 = count(s.top().second.second.second.begin(), s.top().second.second.second.end(), 1);

        if (number_of_1 > 4)
        {
            s.pop();
        }
        else if ((s.top().first < sum_wanted && s.top().second.second.first != 0) )
        {
            curr_key = s.top().first;
            curr_level = s.top().second.first;
            curr_sum = s.top().second.second.first;
            curr_route = s.top().second.second.second;
            value_indice = user_input[curr_level].second;
            s.pop();
            curr_sum -= user_input[curr_level].first;
            s.push(mp(curr_key, mp(curr_level + 1, mp(curr_sum, curr_route))));
            curr_key += user_input[curr_level].first;
            curr_route[value_indice] = 1;
            s.push(mp(curr_key, mp(curr_level + 1, mp(curr_sum, curr_route))));
           
        }
        else if (s.top().first == sum_wanted)
        {

            if (number_of_1 == 4)
            {
                cout << "Labeo bross, labeo !!" << endl;
                found = true;
                break;
            }
            s.pop();
        }
        else if (s.top().first > sum_wanted || s.top().second.second.first == 0)
        {
            s.pop();
        }
    }

    if (!found)
    {
        cout << "No labeo sorry :(" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin >> sum_wanted;

    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        maximum_possible_sum += x;
        sum_of_all += x;
        user_input.push_back(make_pair(x, i));
    }

    sort(user_input.begin(), user_input.end());
    minimum_possible_sum = user_input[0].first;

    if (maximum_possible_sum < sum_wanted || sum_wanted < minimum_possible_sum)
    {
        cout << "No labeo sorry :(" << endl;
    }
    else
    {

        push_into_stack();
    }
}