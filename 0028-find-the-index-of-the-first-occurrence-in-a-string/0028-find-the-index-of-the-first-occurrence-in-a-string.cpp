class Solution {
public:
    int strStr(string hay, string need) {
        int n=hay.size(), k=need.size();
        int indx=-1;
        
        for(int i=0;i<n-k+1;i++){
            string temp=hay.substr(i,k);
            if(temp == need){
                indx=i; break;
            }
        }
        return indx;
    }
};