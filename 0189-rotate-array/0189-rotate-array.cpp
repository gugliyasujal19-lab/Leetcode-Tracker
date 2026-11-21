class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        if(nums.size()==0)
        {
            return ;
        }

        k = k % nums.size();

        reverse_array(nums,0,nums.size()-1);
        reverse_array(nums,0,k-1);
        reverse_array(nums,k,nums.size()-1);
    }

    void reverse_array(vector<int> &nums,int start,int end)
    {
        while(start < end)
        {
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
};