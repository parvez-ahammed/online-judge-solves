#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**-------Shortend Library-------*/


long long int graph[10000][10000];
int status[100];

void inputGraph(int number_of_node, int number_of_edge)
{
    int source, destination, weight;
    weight = 1; 

    for (int i = 1; i <= number_of_edge; i++) 
    {
        cin >> source >> destination;
        graph[source][destination] = weight;
    }
}
int arr[1000001];
void printAM(int N)
{
    for (int i = 1; i <= N; i++) // printing the matrix
    {
        for (int j = 1; j <= N; j++)
        {
             //cout << graph[i][j] << " ";
            arr[i] += graph[i][j];
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if (arr[i] == N-1)
        {
            cout << "Case #1: The desired island is " << i << endl;
            break;
        }
        else{
            cout << "Case #t: Doomed!" <<endl;
        }

 
    }
}

int main()
{
    int t;
    cin >> t;
    int n, m;
    while (t--)
    {
        cin >> n >> m;
        inputGraph(n, m);
        printAM(n);
    }
    return 0;
}
