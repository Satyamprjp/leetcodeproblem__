class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int area=0;
        int ans=0;
        while(right>left){
            if(height[left]>=height[right]){
                area=(right-left)*height[right];
                right--;
            }
            else{
                area=(right-left)*height[left];
                left++;
            }
            ans=max(ans,area);
            
        }
        return ans;
        
    }
};