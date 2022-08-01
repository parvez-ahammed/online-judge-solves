#include <bits/stdc++.h>
using namespace std;

#define mp make_pair

int sum_of_all = 45;           // total sum of all the elements
int sum_wanted = 0;            // the sum wanted form the subsets
int maximum_possible_sum = 45; // maximum possible sum of the set
int minimum_possible_sum = 1;  // minimum possible sum of the set

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
priority_queue<int> pq;

int min = 999;

void show_vector(vector<int> v) // printing the vector
{
    string str;
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        if (v[i] == 1)
        {
            str.push_back(user_input[i].first + '0');
        }
        // cout << user_input[i].first << endl;
    }

    int num = stoi(str);

    pq.push(num * -1);
}

void push_into_stack()
{
    v_int route(user_input.size(), 0);           // initializing the route
    s.push(mp(0, mp(0, mp(sum_of_all, route)))); // initializing the stack as level = 0
    int curr_key;
    int curr_level;
    int curr_sum;
    v_int curr_route;
    int value_indice;
    bool first_push = true;
    while (!s.empty())
    {

        if ((s.top().first < sum_wanted && s.top().second.second.first != 0) || first_push)
        {
            curr_key = s.top().first;                     //  retrieving the sum of subsets
            curr_level = s.top().second.first;            //  retrieving  level
            curr_sum = s.top().second.second.first;       //  retrieving  sum in hand
            curr_route = s.top().second.second.second;    // retrieving the route
            value_indice = user_input[curr_level].second; // index number of value to be added

            s.pop();                                  // popping from the stack
            curr_sum -= user_input[curr_level].first; // deleting the set element value

            s.push(mp(curr_key, mp(curr_level + 1, mp(curr_sum, curr_route)))); // pushing right child

            curr_key += user_input[curr_level].first; // addign the set element value
            curr_route[value_indice] = 1;             // setting route[i] = 1 as left child

            s.push(mp(curr_key, mp(curr_level + 1, mp(curr_sum, curr_route)))); // pushing left child
            first_push = false;                                                 // first time pushed
        }
        else if (s.top().first == sum_wanted) // if the sum is found
        {
            // cout << "The found route for the wanted sum is" << endl;
            show_vector(s.top().second.second.second); // printing the route
            s.pop();
        }
        else if (s.top().first > sum_wanted || s.top().second.second.first == 0)
        {
            s.pop(); // if it is greater than popping it
        }
    }
}

int main()
{

    user_input.push_back(make_pair(1, 0));
    user_input.push_back(make_pair(2, 1));
    user_input.push_back(make_pair(3, 2));
    user_input.push_back(make_pair(4, 3));
    user_input.push_back(make_pair(5, 4));
    user_input.push_back(make_pair(6, 5));
    user_input.push_back(make_pair(7, 6));
    user_input.push_back(make_pair(8, 7));
    user_input.push_back(make_pair(9, 8));

    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> sum_wanted;

        sort(user_input.begin(), user_input.end()); // sorting the values in ascending order
        push_into_stack();                          // starting the process

        cout << pq.top() * -1 << endl;
        priority_queue<int> empty;
        pq = empty;
    }
}