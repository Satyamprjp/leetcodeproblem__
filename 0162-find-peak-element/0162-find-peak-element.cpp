class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        long long el =LONG_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>el){
                el=nums[i];
            }
            else return i-1;
        }
        return n-1;
        
    }
};