class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int diff=arr[1]-arr[0];
        bool flag=true;
        for(int i=1; i<arr.size()-1; i++)
        {
            if((arr[i+1]-arr[i])!=diff)
            {
                flag=false;
            }
        }
        return flag;
    }
};