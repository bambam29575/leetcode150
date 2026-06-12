class Solution {
public:
    int romanToInt(string s) {
        int size = s.size();
        int result=0;
        for(int i=0;i<size; i++)
        {
            if(s[i]=='I')
            {
                if(s[i+1]=='V')
                {
                    i++;
                   result+=4;
                }else if(s[i+1]=='X')
                {
                    i++;
                    result += 9;
                }else result += 1;
            }

            else if(s[i]=='X')
            {
                if(s[i+1]=='L')
                {
                    i++;
                   result+=40;
                }else if(s[i+1]=='C')
                {
                    i++;
                    result += 90;
                }else result += 10;
            }
            else if(s[i]=='C')
            {
                if(s[i+1]=='D')
                {
                    i++;
                   result+=400;
                }else if(s[i+1]=='M')
                {
                    i++;
                    result += 900;
                }else result += 100;
            }
            else if(s[i]=='V')
            {
                result+= 5;
            }
            else if(s[i]=='L')
            {
                result+= 50;
            }
            else if(s[i]=='D')
            {
                result+= 500;
            }
            else result += 1000;
        }return result;
    }
};
