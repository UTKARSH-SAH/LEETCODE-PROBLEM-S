class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> distribution(num_people);
        int i=0;
        int j=1;
        int sum=0;
        while(candies>sum+j)
        {
            distribution[i]+=j;
            sum+=j;
            i++;
            j++;
            if(i==num_people)
            {
                i=0;
            }
        }
        distribution[i]+=candies-sum;
        return distribution;
    }
};