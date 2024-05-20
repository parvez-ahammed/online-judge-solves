#include <bits/stdc++.h>
using namespace std;

void printSubsequences(vector<int>& arr, int index,vector<int>& subseq) {
    if (index == arr.size()) {
        for (auto val : subseq) {
           cout << val << " ";
        }
       cout <<endl;
        return;
    }
    printSubsequences(arr, index + 1, subseq);
    subseq.push_back(arr[index]);
    printSubsequences(arr, index + 1, subseq);
    subseq.pop_back();
}

int main() {
   vector<int> arr = {1, 2, 3};
   vector<int> subseq;
    printSubsequences(arr, 0, subseq);
    return 0;
}
