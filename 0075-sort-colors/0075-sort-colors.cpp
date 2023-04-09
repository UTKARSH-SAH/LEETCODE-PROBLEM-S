class Solution {
public:
    void sortColors(vector<int>& nums) {
    int i=0,j=0,k,n = nums.size();
        k = n-1;
        for(i = 0; i < n; i++){
            if(nums[i]==0){
                while(j<=i&&nums[j]==0){
                    j++;
                }
                if(j<i){
                    swap(nums[j],nums[i]);
                    i--;
                    j++;
                }
            }else if(nums[i]==2){
                while(k>i&&nums[k]==2){
                    k--;
                }
                if(k>i){
                    swap(nums[k],nums[i]);
                    i--;
                    k--;
                }
            }
        }
    }
};