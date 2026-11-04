class Solution {
public:
    int minMoves(vector<int>& nums) {
        int largest =1;
        for(int i =0;i<nums.size();i++){
            largest=max(largest,nums[i]);
        }
        int count =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<largest){
                count = count +(largest-nums[i]);
            }
        }
        return count;
        
    }
};