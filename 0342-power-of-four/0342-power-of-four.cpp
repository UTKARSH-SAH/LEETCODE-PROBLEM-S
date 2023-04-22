class Solution {
public:
    bool isPowerOfFour(int n) {
        long int i;
        for(i=0; pow(4,i)<n; i++);
        return(pow(4,i)==n);
    }
};
