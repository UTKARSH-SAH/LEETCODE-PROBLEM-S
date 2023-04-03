class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        int boat=0;
        int n= p.size();
        sort(p.begin(), p.end());
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
                if(p[lo]+p[hi]<=limit){
                    boat++;
                    lo++, hi--;
                }
                else if(p[lo]+p[hi]>limit){
                    boat++;
                    hi--;
                }
                else{
                    boat++;
                    lo++;
                }

        }
return boat;
    }
};