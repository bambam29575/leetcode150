class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int count=0;
        while(i<t.size())
        {
            if(t[i]==s[j])
            {
                j++;
                count++;
            }
            i++;
        }
        if(count==s.size()) return true;
        else return false;
    }
};
