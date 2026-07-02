class Solution {
public:
    bool isPalindrome(int x) {
     int q,r,c;
     c=0;
     if(x<0) return false;
     vector<int> arr;
     while(x>0)
     {
        r=x%10;
        arr.push_back(r);
        x=x/10;
        c++;
     }
     for(int i=0;i<(c/2);i++)
     {
        if(arr[i]!=arr[c-i-1]) return false;
     }
     return true;
    }
};
