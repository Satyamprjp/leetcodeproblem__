class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int cnt=1;
        int maxsubarray=1;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]>nums[i]){
                cnt++;
                maxsubarray=max(maxsubarray,cnt);
            }
            else{cnt=1;}
        }
        cnt=1;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]<nums[i]){
                cnt++;
                maxsubarray=max(maxsubarray,cnt);

            }
            else{cnt=1;}
        }
        return maxsubarray;
        
    }
};