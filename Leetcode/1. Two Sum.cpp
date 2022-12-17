class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       int a = -1, b= -1;
      
        vector<int> values;
        
        for (int i = 0 ; i < nums.size() ;i++)
        {
           
            
                 for (int j = 0 ; j < nums.size() ;j++)
                     {
            
                     if(i != j && nums[i]+ nums[j] == target )
                     {
                         values.push_back(i);
                         values.push_back(j);
                         break;
                    }
  
            }  
            
            if(values.size()== 2)
                break;
        }
        
         return values;
        
    }
};