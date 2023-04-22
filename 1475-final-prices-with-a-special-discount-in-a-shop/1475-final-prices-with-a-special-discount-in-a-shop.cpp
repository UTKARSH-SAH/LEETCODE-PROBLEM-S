class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> finalprices;
        int flag;
        for(int i=0; i<prices.size(); i++)
        {
            flag=0;
            for(int j=i+1; j<prices.size(); j++)
            {
                if(prices[j]<=prices[i])
                {
                    flag=1;
                    finalprices.push_back(prices[i]-prices[j]);
                    break;
                }
            }
            if(flag==0)
            {
                finalprices.push_back(prices[i]);
            }
        }
        return finalprices;
    }
};