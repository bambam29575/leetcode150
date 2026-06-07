class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m=nums[0];
        int size=nums.size();
        int n;
        int c =0;
        int cp;
        for(int j=0;j<size;j++)
        {
            m=nums[j];
            if(nums[j] != 2000000000)
            {
                cp=0;
                cp++;
                for(int i=j+1; i<size;i++)
                {
                    if(nums[i]==m)
                    {
                        cp++;
                        nums[i] = 2000000000;
                    }
                }
                if(cp>c)
                {
                    c =cp;
                    n=m;
                }
            }
        }
        return n;
    }
};
