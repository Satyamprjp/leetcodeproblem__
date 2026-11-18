class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int i=0;
        for( i=0;i<nums.size();i++){
            if(k<2 || nums[i]!=nums[k-2]){
                nums[k]=nums[i];
                k+=1;
            }

        }
        return k;
        
    }
};