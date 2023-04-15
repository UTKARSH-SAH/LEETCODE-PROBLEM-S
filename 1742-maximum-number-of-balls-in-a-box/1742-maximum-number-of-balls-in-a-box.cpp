class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
       vector<int> arr(highLimit+1);
       for(int i=lowLimit; i<=highLimit; i++)
       {
           int num=i;
           int sum=0;
           while(num!=0)
           {
               sum+=num%10;
               num/=10;
           }
           arr[sum]++;
       }
       int max=0;
       for(int i=1; i<=highLimit; i++)
       {
           if(arr[i]>arr[max])
           {
               max=i;
           }
       }
       return arr[max];
    }
};