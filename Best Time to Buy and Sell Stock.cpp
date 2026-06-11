class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size=prices.size();
        int d,cp,sub;
        d=0;
        
        for(int i=0;i<size-1;i++)
        {
            cp=prices[i];
            for(int j=i+1; j<size;j++)
            {
                if(prices[j] > cp)
                {
                   sub =prices[j]-cp;
                   if(sub>d)
                   {
                    d= sub;
                   }
                }
            }
        }
        return d;
        
    }
};
