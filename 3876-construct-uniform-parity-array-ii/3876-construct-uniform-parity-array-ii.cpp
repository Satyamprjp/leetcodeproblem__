class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int odd =INT_MAX;
        int even=INT_MAX;
        for(int i=0;i<n;i++){
            if((nums1[i]%2)!=0){
                odd=min(odd,nums1[i]);
            }
            else{
                even=min(even,nums1[i]);
            }
        }
        if (odd == INT_MAX || even == INT_MAX) return true;
        if((even-odd)<1){
            return false;
        }
        return true;

        
    }
};