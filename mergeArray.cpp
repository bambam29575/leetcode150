class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1 =m-1;
        int temp;
        int j;
        int n2= n;
        for(int i=0; i <n2; i++ )
        {
              nums1[++n1] = nums2[i];
        }
      j=n1-1;
        while(j>=0)
        {
             for(int i =0;i<=j;i++)
           {
              if(nums1[i]>nums1[i+1])
              {
               temp= nums1[i];
               nums1[i] = nums1[i+1];
               nums1[i+1] = temp;
              }
          }
          j--;
        }
        
    }
};
