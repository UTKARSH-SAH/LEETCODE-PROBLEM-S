class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        return mainTank<5?mainTank*10:mainTank*10+min(1+(mainTank-5)/4, additionalTank)*10;
    }
};