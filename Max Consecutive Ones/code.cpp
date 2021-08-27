class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result=0;
        int count=0;
        
        for(int i:nums)
        {
            if(i==0)
            {
                count = 0;
            }
            else
            {
                count++;
                result=max(result,count);
            }
        }
        return result;
    }
};