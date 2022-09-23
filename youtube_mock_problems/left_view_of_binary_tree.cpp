/*
1 . The task of this problem is to print the left view of a binary tree meaning if you see a binary tree from the left then what numbers will you see? Puttig a demo below

               1
            5     6
         9    10    8
                       2

            YOU WILL SEE 1 5 9 2 your task is to print this

2 . On the second task you are required to print he right view also alongside the left view
                1
            5     6
         9    10    8
            20       2

          YOU WILL FIND  1  5 6 9 8 20 2 your task is to print this
            */

#include <bits/stdc++.h>
using namespace std;
#define MAX 50
vector<int> graph[MAX];
queue<pair<int, int>> q;
vector<int> visited_levels;
queue<int> bbq;

void example_graph_input()
{
    graph[1].push_back(5);
    graph[1].push_back(6);
    graph[6].push_back(8);
    graph[8].push_back(2);
    graph[5].push_back(9);
    graph[5].push_back(10);
    graph[10].push_back(20);
}

vector<int> parent_level(100, 0);
void BFS(int source)
{
    parent_level[source] += 1;
    q.push(make_pair(source, parent_level[source]));

    bbq.push(source);

    while (!bbq.empty())
    {
        for (int i = 0; i < graph[bbq.front()].size(); i++)
        {
            bbq.push(graph[bbq.front()][i]);
            parent_level[graph[bbq.front()][i]] = parent_level[bbq.front()] + 1;
            q.push(make_pair(graph[bbq.front()][i], parent_level[graph[bbq.front()][i]]));
        }

        bbq.pop();
    }
}

int main()
{
    int root = 1;

    example_graph_input();

    BFS(root);

    int current_level, item;
    bool possible = true;

    int i = 0;
    while (!q.empty())
    {
        current_level = q.front().second;
        item = q.front().first;
        q.pop();

        // IF BOTH LEFT AND RIGHT VIEW IS REQUIRED
        if (count(visited_levels.begin(), visited_levels.end(), current_level) == 0 || current_level != q.front().second)
            cout << item << " ";

        // IF LEFT VIEW ONLY IS REQUIRED
        // if (count(visited_levels.begin(), visited_levels.end(), current_level) == 0)
        //     cout << item << " ";

        if (possible == true)
            cout << endl, possible = false;
        else
            i += 1;
        if (i == 2)
            cout << endl,i = -1;
        
        visited_levels.push_back(current_level);
    }
}
