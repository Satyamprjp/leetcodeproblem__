class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<=nums.size();i++){
            if(mpp.find(i)==mpp.end()) return i;
            
        }
        
        return i;
        
    }
};