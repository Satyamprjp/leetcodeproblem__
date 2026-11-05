class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> mylist;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i=0;
        while(i<n && nums[i]<=target){
            if(nums[i]==target){
                mylist.push_back(i);
                

            }
            i++;
        }
        return mylist;
        
    }
};