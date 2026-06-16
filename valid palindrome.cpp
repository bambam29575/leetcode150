class Solution {
public:
    bool isPalindrome(string s) {
        int size= s.size();
        string s1="";
        for(int i=0;i<size;i++)
        {
            if(isalnum(s[i]))
            {
                s1+=tolower(s[i]);
            }
        }
        size=s1.size();
        int count=size-1;
        for(int i=0;i<(size/2);i++)
        {
            if(s1[i]!=s1[count--]) return false;
            // count--;
        }
        return true;
    }
};
