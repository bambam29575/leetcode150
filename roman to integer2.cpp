class Solution {
public:
    int romanToInt(string s) {
        int size = s.size();
        int result=0;
        unordered_map<char,int> roman = {
           {'I',1},
           {'X',10},
           {'C',100},
           {'M',1000},
           {'L',50},
           {'V',5},
           {'D',500}
        };
        for(int i=0;i<size; i++)
        {
            if(i==size-1)
            {
                result += roman[s[i]];
            }
            else if(roman[s[i]]<roman[s[i+1]])
            {
                result-=roman[s[i]];
            }
            else result += roman[s[i]];
        }return result;
    }
};
