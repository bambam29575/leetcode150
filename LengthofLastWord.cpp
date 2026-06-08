class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size()-1;
        int count=0;
        while(size>0)
        {
             if(s[size] == ' ')
            {
             size--;
            }
            else break;
        }
        if(size < 0)
        {
             return 0;
        }
          
       
        while(s[size] != ' ')
        {
            count++;
            size--;
            if(size<0)
            {
                return count;
            }
        }
        return count;
    }
};
