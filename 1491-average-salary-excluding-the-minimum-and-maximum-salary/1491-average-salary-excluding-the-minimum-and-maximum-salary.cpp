class Solution {
public:
    double average(vector<int>& salary) {
        int max=INT_MIN;
        int min=INT_MAX;
        int sum=0;
        for(int i=0; i<salary.size(); i++)
        {
            sum+=salary[i];
            if(salary[i]>max)
            {
                max=salary[i];
            }
            if(salary[i]<min)
            {
                min=salary[i];
            }
        }
        sum=sum-(min+max);
        return sum/(salary.size()-2.0);
    }
};