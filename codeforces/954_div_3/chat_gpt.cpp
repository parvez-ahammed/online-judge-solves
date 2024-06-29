#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<int> b(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    
    int q;
    cin >> q;
    
    vector<pair<int, pair<int, int>>> queries(q);
    
    for (int i = 0; i < q; ++i) {
        int type, x, y = 0;
        cin >> type >> x;
        if (type == 2) {
            cin >> y;
        }
        queries[i] = {type, {x, y}};
    }
    
    // Preprocess total money up to each month
    vector<long long> total(13, 0);
    for (int i = 0; i < n; ++i) {
        total[b[i]] += a[i];
    }
    
    for (int i = 1; i <= 12; ++i) {
        total[i] += total[i - 1];
    }
    
    // Map to keep track of sponsors by month
    map<int, priority_queue<int>> month_sponsors;
    for (int i = 0; i < n; ++i) {
        month_sponsors[b[i]].push(a[i]);
    }
    
    // Process and output answers to queries
    for (auto& query : queries) {
        int type = query.first;
        int x = query.second.first;
        if (type == 1) {
            cout << total[x] << "\n";
        } else if (type == 2) {
            int y = query.second.second;
            
            vector<int> contributions;
            for (int i = 1; i <= x; ++i) {
                auto& pq = month_sponsors[i];
                vector<int> temp; // Temporary storage for removed elements
                for (int j = 0; j < y && !pq.empty(); ++j) {
                    contributions.push_back(pq.top());
                    temp.push_back(pq.top());
                    pq.pop();
                }
                // Restore the priority queue
                for (int contribution : temp) {
                    pq.push(contribution);
                }
            }
            
            long long max_total = 0;
            for (int contribution : contributions) {
                max_total += contribution;
            }
            
            cout << max_total << "\n";
        }
    }
    
    return 0;
}
