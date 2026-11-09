class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans=1;
        vector<int> answer;
        answer.push_back(ans);

        for(int i=1;i<=rowIndex;i++){
            ans=ans*(rowIndex+1-i);
            ans=ans/i;
            answer.push_back(ans);
        }
        return answer;

        
    }
};