class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> result(2);
        int i=0;
        while(n>0)
        {
            int bit=n&1;
            n=n>>1;
            if(bit==1)
            {
                if(i%2==0)
                {
                    result[0]++;
                }
                else
                {
                    result[1]++;
                }
            }
            i++;
        }
        return result;
    }
};