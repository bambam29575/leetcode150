class Solution {
public:
    int strStr(string haystack, string needle) {
        int j;
        int c;
        int h= haystack.size();
        int n= needle.size();
        int i=0;
        int k;
        for(int k=0; k<=(h-n);k++)
        {
            i=k;
            j=0;
            c=0;
            if(haystack[i]==needle[j])
            {
                c++;
                if(c==n)
                    {
                        return k;
                    }
                for(i=i+1; i<h;i++)
                {
                    j++;
                     if(haystack[i]!=needle[j])
                    {
                        break;
                    }
                    c++;
                   
                    if(c==n)
                    {
                        return k;
                    }
                }
            }
        }
        return -1;
    }
};
