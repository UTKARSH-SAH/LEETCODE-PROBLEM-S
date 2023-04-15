class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26] = {0};
        for(int i=0; i<sentence.length(); i++)
        {
            arr[sentence[i]-97]=1;
        }
        int flag=1;
        for(int i=0; i<26; i++)
        {
            if(arr[i]!=1)
            {
                flag=0;
            }
        }
        return flag;
    }
};