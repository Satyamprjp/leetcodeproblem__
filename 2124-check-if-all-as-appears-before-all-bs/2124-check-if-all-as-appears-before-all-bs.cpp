class Solution {
public:
    bool checkString(string s) {
        int i = 0, j = 1;
        while (j < s.size()) {
            if (s[i] == 'b' && s[j] == 'a') {
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};