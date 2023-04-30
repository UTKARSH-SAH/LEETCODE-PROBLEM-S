class Solution {
public:
    int digit_square_sum(int num)
    {
        int sum=0;
        while(num!=0)
        {
            sum+=(num%10)*(num%10);
            num/=10;
        }
        return sum;
    }

    bool isHappy(int n) {
        vector<int> results;
        while(n!=1)
        {
            for(int i=0; i<results.size(); i++)
            {
                if(results[i]==n)
                {
                    return false;;
                }
            }
            results.push_back(n);
            n = digit_square_sum(n);
        }
        return true;
    }
};