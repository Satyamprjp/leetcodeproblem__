class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        
        int i =0;
        int j=1;

        int n = nums.size();
        while(j<n){
            if(nums[j]==(nums[i]+1)){
                i++;
                j++;
            }
            else if(nums[j]!= (nums[i]+1)){
                ans.push_back(nums[i]+1);
                nums[i]++;
                
            }
        }
        return ans;
    }
};