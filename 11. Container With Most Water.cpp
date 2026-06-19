class Solution {
public:
    int maxArea(vector<int>& height) {
        int size=height.size();
        int max,diff,min;
        max=0;
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
               if(height[i]>height[j]) min =height[j];
               else min=height[i];
               diff=j-i;
               if(min*diff > max)
               {
                max=min*diff;
               }

            }
        }
        return max;
    }
};
