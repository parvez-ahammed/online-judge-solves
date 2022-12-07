#include <iostream>
#include <bits/stdc++.h>
using namespace std;


#define Sort(x) sort(x.begin(), x.end())

int binarySearch(vector<int> v, int key)
{
    int low = 0, high = v.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] <= key && v[mid + 1] >= key)
            return mid;
        if (v[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{

    int n, q;
    cin >> n >> q;

    vector<int> v;
    int temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    Sort(v);
    int x, y;
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        if (x >  v[v.size() - 1])
            cout << 0 << endl;
        else
            cout << binarySearch(v, y) - binarySearch(v, x)  << endl;
    }
    return 0;
}