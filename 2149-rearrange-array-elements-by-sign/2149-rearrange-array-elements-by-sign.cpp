class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector <int>ans(n,0);
        int low = 0;
        int low2 =1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[low]=nums[i];
                low+=2;
            }
            if(nums[i]<0){
                ans[low2]=nums[i];
                low2+=2;
            }
        }
        return ans;
        
    }
};