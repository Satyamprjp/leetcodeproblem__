class Solution {
public:
    int trap(vector<int>& height) {
        
        int ans=0;
        int leftmax=height[0];
        int left=0;
        int right =height.size()-1;
        int rightmax=height[right];
        while(left<right){
            if(height[left]<height[right]){
                leftmax=max(leftmax,height[left]);
                ans+=leftmax-height[left];
                left++;


            }
            else{rightmax=max(rightmax,height[right]);
            ans+=rightmax-height[right];
            right--;
                
            



                }
        }
    return ans;
         
        
    }
};