class Solution {
public:
    bool isPalindrome(int x) {
        bool possible = true;
        string first = to_string(x);
        
        string second = first;
        reverse(first.begin(),first.end());
        if (first == second)
                possible = true;
        else 
            possible = false;
        
        return possible;
    }
};