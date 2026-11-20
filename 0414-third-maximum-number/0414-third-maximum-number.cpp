class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        long long largest = LLONG_MIN;
        long long second_largest = LLONG_MIN;
        long long third_largest = LLONG_MIN;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==largest ||nums[i]==second_largest ||nums[i] == third_largest)
            {
                continue;
            }
            
            if(nums[i]>largest)
            {
                third_largest = second_largest;
                second_largest = largest;
                largest = nums[i];
            }

            else if(nums[i]>second_largest )
            {
                third_largest = second_largest;
                second_largest = nums[i];
            }

            else if(nums[i]>third_largest)
            {
                third_largest = nums[i];
            }
        }
        if (third_largest == LLONG_MIN)
        {
            return largest;
        }         
        return third_largest;
    }
};