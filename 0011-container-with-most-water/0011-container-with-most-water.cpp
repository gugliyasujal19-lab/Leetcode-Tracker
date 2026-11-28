class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int left = 0;
        int right = height.size()-1;
        int maxArea = 0;
        int area = 0;

        while(left<right)
        {
            area = (min(height[left],height[right])*(right-left));
            
            if(height[left]<height[right])
            {
                left+=1;
            }

            else
            {
                right-=1;
            }
            maxArea = max(maxArea,area);
        }
        return maxArea;
    }
};