#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    int count;

    TrieNode() : count(0) {}
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    void insert(const string& word) {
        TrieNode* node = root;
        for (char c : word) {
            if (node->children.find(c) == node->children.end()) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
            node->count++;
        }
    }

    int countWordsWithPrefix(const string& prefix) {
        TrieNode* node = root;
        for (char c : prefix) {
            if (node->children.find(c) == node->children.end()) {
                return 0;
            }
            node = node->children[c];
        }
        return node->count;
    }
};

void solve() {
    int n;
    cin >> n;
    vector<string> v(n);
    Trie prefixTrie, suffixTrie, bothTrie;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        prefixTrie.insert(v[i]);
        string reversedStr = v[i];
        reverse(reversedStr.begin(), reversedStr.end());
        suffixTrie.insert(reversedStr);

        // Insert into bothTrie to keep track of strings that have both the prefix and suffix
        bothTrie.insert(v[i]);
    }

    int q;
    cin >> q;
    while (q--) {
        string li, ri;
        cin >> li >> ri;
        int prefixCount = prefixTrie.countWordsWithPrefix(li);
        string reversedRi = ri;
        reverse(reversedRi.begin(), reversedRi.end());
        int suffixCount = suffixTrie.countWordsWithPrefix(reversedRi);

        // Get the count of strings that have both the prefix and suffix
        int bothCount = bothTrie.countWordsWithPrefix(li + "#" + ri);

        // Total count is the sum of prefixCount and suffixCount minus bothCount
        int totalCount = prefixCount + suffixCount - bothCount;
        cout << totalCount << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}