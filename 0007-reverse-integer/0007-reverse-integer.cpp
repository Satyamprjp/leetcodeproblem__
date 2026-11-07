class Solution {
public:
    int reverse(int x) {
        int revnum =0;
        
        while(x!=0){
            
            if(revnum>(INT_MAX/10)|| revnum<(INT_MIN/10)){ return 0;}
            
        int lastdigit =x%10;
        
        revnum = lastdigit + revnum*10;
        x=x/10;
        }
        return revnum;
        
    }
};