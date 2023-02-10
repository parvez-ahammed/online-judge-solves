#include <bits/stdc++.h>
using namespace std;


int32_t main()
{

    // Declare a priority queue
    priority_queue<int> pq;

    //push values into priority queue
    pq.push(10 * -1);
    pq.push(20 * -1);
    pq.push(30 * -1);
    pq.push(40 * -1);
    pq.push(50 * -1);
    pq.push(60 * -1);
    
    // Print the priority queue
    while(!pq.empty())
    {
        cout << pq.top() * -1 << " ";
        pq.pop();
    }

    return 0;
}