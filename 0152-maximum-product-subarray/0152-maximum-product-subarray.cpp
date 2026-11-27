class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int maxproduct = nums[0];
        int minproduct = nums[0];
        int ans = nums[0];

        for(int i=1;i<nums.size();i++)
        {
            int a = nums[i];
            int b = maxproduct * nums[i];
            int c = minproduct * nums[i];

            maxproduct = max(a,max(b,c));
            minproduct = min(a,min(b,c));

            ans = max(ans,maxproduct);
        }
        return ans;
              
    }
};