class Solution {
public:
    int maxArea(vector<int>& height) {
        int max,left,right,currArea;
        left=0;
        max=0;
        int size= height.size();
        right=size-1;
        while(left<right)
        {
           currArea= (min(height[left],height[right]))*(right-left);
           if(currArea>max) max=currArea;
           if(height[left]<height[right]) left++;
           else right--;
        }
        return max;
    }
};
