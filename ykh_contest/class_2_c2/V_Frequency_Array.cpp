#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int p, int r, int num)
{
    while (p <= r)
    {
        int mid = (p + r) / 2;
        if (arr[mid] == num)
            return mid;
        else if (arr[mid] > num)
            r = mid - 1;
        else
            p = mid + 1;
    }
    return -1;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v;
    set<int> s;
    priority_queue<int> pq;
    int temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
        s.insert(temp);
        pq.push(temp);
    }

    vector<pair<int, int>> freq(s.size(), make_pair(0, 0));

    int i = 0;
    int j = 0;

    freq[i].first = pq.top();
    freq[i].second = 1;
    pq.pop();

    while (!pq.empty())
    {
        if (freq[i].first == pq.top())
        {
            freq[i].second += 1;
            pq.pop();
        }
        else
        {
            i += 1;
            freq[i].first = pq.top();
            freq[i].second = 1;
            pq.pop();
        }
    }
    reverse(freq.begin(), freq.end());
    vector<int> pos;

    for (int i = 0; i < freq.size(); i++)
    {
        pos.push_back(freq[i].first);
    }

    // for (int i = 0; i < freq.size(); i++)
    // {
    //     cout << freq[i].first << " " << freq[i].second << endl;
    // }

    int key_pos;
    for (int i = 0; i < m; i++)
    {
        key_pos = binarySearch(pos, 0, pos.size(), v[i]);
        
        if (key_pos == -1)
        {
            cout << 0;
        }
        else
        {
            cout << freq[key_pos].second << endl;
        }
    }

    return 0;
}