class Solution {
public:
    bool canAliceWin(int n) {
        int j=10;
        int count=0;
        while(n>=0 ){
            n-=j;
            j--;
            count++;
        }
        if(count%2==0) return true;
        return false;
        
    }
};