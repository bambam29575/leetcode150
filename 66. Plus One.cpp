class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size=digits.size();
        int carry=0;
        int count=0;

        if(digits[size-1]+1 >9)
        {
            if(digits[size-1]==9) count++;
            digits[size-1]=0;
            carry =1;
            if(count == size)
            {
                digits[0]=1;
                digits.push_back(0);
                return digits;
            }
        }
        else digits[size-1] += 1;
        for(int i=size-2;i>=0;i--)
        {
            if(digits[i]==9) count++;
            if(count == size)
            {
                digits[i]=1;
                digits.push_back(0);
                return digits;
            }
            if(carry==1)
            {
                if ((digits[i]+1) >9)
                {
                    digits[i] =0;
                    carry=1;
                }
                else{
                     digits[i] +=1;
                     carry=0;
                }
            }
            
        }
        return digits;
    }
};
