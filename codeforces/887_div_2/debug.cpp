#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i<n; i++){
            cin >> a[i];
        }

        int cnt = 0, indx = 0, mn = INT_MAX;
        for(int i = 1; i<n; i++){
            if(mn > (a[i] - a[i-1])){
                mn = min(mn, (a[i] - a[i-1]));
                indx = i-1;
            }
        }

        cerr<< a[indx+1]- a[indx]<<" "<<mn<<"\n";

        while(true){
            if(a[indx+1] < a[indx]){
                break;
            }
            a[indx]++;
            a[indx+1]--;
            cnt++;
        }
        cout<<cnt<<"\n";
    }
    cerr << "\n\n\n"<< (float)clock() / CLOCKS_PER_SEC * 1000 << " ms" << endl;
    return 0;
}
