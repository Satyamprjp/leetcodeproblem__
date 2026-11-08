class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map <int,int> mpp;
        for(int i =0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int m=k;
        while(k>=1 && k<=100){
            if(mpp.find(k)!=mpp.end()){
                k+=m;
            }
            else if(mpp.find(k)==mpp.end()){
                return k;
            }
        }
        

        return k;
    }
};