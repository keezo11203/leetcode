//max consecutive ones in array
//read thru full length of array 
//keep track of 1s using "count"
//if theres no 1s, count is 0

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int ones=0;
        int count=0;
        
       for(int i = 0;i < nums.size();i++)
       {
           if(nums[i]==1)
           {
               count++;
               ones=max(count,ones);
           }
           else
           {
               count = 0;
           }
       } 
       return ones;
    }
};
