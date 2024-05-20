#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();
    int count = (n * (n + 1)) / 2;
    cout << "Total number of subarrays: " << count << endl;
    return 0;
}