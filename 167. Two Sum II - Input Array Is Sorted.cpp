class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indx;
        int left,right,currSum,count;
        int size=numbers.size();
        currSum=0;
        left=0;
        count=0;
        right=size-1;
        while(left<right)
        {
            currSum= numbers[left] + numbers[right];
           if(currSum==target)
           {
            indx.push_back(left+1);
            indx.push_back(right+1);
            count=1;
           }
           else if(currSum<target)
           {
            left++;
           }
           else right--;
           if(count==1) break;
        }
        return indx;
    }
};
