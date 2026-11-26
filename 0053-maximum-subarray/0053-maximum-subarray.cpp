class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int currentSum = 0;
        int maxSum = INT_MIN;

        for(int i = 0;i<nums.size();i++)
        {
            if(currentSum >= 0)
            {
                currentSum+=nums[i];
                maxSum = max(maxSum,currentSum);
            }

            else
            {
                currentSum = 0;
                currentSum+=nums[i];
                maxSum = max(maxSum,currentSum);
            }
        }
        return maxSum;  
    }
};