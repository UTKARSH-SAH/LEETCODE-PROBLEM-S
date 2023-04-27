class Solution {
public:
    int minTimeToType(string word) {
        int result = word.size();
        char current = 'a';
        for(char ch: word)
        {
            result+=min(abs(ch-current),26-abs(current-ch));
            current = ch;
        }
        return result;
    }
};