class Solution {
public:
    int climbStairs(int n) {
       
       vector < int > v; 
       v.push_back(0);
       v.push_back(1);
       v.push_back(2);
        for(int i=3;i< n+1;i++) v.push_back(v[i-1] + v[i-2]) ;
        return v[n];
    }
};