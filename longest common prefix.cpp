class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i,k;
        k=0;
        int j=0;
        int size = strs.size();
        char ltr;
        int count=1;
        string str;
        if(size <2)
        {

            return strs[0];
        }
        
        while(true)
        {
            i=0;
            if(j==strs[i].size())
            {
                return str;
            }
            ltr=strs[i][j];
            count=1;
            for(i=1; i<size; i++)
         {
             if(j==strs[i].size())
            {
                return str;
            }
            if(ltr==strs[i][j])
            {
                count++;
            }else return str;
            if(count==size)
            {
                str.push_back(ltr);
            }
         }j++;
        }
        
    }
};
