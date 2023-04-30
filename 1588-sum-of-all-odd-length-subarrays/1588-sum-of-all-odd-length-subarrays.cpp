class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=1; i<=arr.size(); i+=2)
        {
            for(int j=0; j<arr.size()-i+1; j++)
            {
                for(int k=0; k<i; k++)
                {
                    sum+=arr[j+k];
                }
            }
        }
        return sum;
    }
};