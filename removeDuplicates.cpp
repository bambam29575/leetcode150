class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size=nums.size();
        int arr[size];
        int j=1;
        int m=nums[0];
        arr[0] =m;
        int count=1;
        for(int i=1; i<size; i++)
        {
            if(nums[i] != m)
            {
               arr[j++] =nums[i];
               m=nums[i];
               count++;
            }
        }
        for(int i=0; i<count; i++)
        {
            nums[i] = arr[i];
        }
        return count;

    }
};
