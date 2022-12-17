class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string pre= "";
        
        vector<pair<int ,string>> newStrs;
        
        for (int i= 0  ; i < strs.size() ;i++ )
            newStrs.push_back(make_pair(strs[i].size(),strs[i]));
        
        sort(newStrs.begin(), newStrs.end());
        
        
//          for (int i= 0  ; i < newStrs.size() ;i++ )
//            cout << newStrs[i].second << "\n";
        
        bool possible = true;
        
        for (int i = 0 ; i < newStrs[0].second.size() ;i++)
        {
            
            for (int j = 1 ; j < newStrs.size() ;j++)
            {
                if (newStrs[0].second[i] !=  newStrs[j].second[i])
                {
                    possible = false;
                    break;
                }     
                    
            }
            
            if (possible)
                pre+=newStrs[0].second[i];
            else 
                break;
        }
        
        return pre;
        
    }
};