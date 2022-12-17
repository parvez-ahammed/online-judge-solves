class Solution {
public:
    int romanToInt(string S) {
        int ans = 0, num = 0;
        vector <int> val (100,0);
        val['I'-0] = 1,val['V'-0] = 5,val['X'-0] = 10,val['L'-0] = 50,val['C'-0] = 100,val['D'-0] = 500,val['M'-0] = 1000;
        
        for (int i = S.size()-1; ~i; i--) {
            num = val[S[i] -0];
            if (3 * num < ans) ans -= num;
            else ans += num;
        }
        
        return ans;        
    }
};
