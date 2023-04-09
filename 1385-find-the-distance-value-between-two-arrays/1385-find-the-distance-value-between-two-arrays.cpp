class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int distance=0;
        for(int i=0; i<arr1.size(); i++)
        {
            int flag=1;
            for(int j=0; j<arr2.size(); j++)
            {
                if(abs(arr1[i]-arr2[j])<=d)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                distance++;
            }
        }
        return distance;
    }
};