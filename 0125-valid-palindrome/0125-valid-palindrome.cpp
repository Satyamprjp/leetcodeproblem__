class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() ==0 || s.size() == 1) return true;
        int l=0;
        int m= s.size()-1;
        while(l<m){
            while(l<m && !isalnum(s[l])) l++;
            while(l<m && !isalnum(s[m])) m--;
            if (tolower(s[l]) != tolower(s[m])) return false;
l++;
m--;
        }
        return true;
    }
};