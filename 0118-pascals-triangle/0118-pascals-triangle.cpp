class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> totalans;
       for(int Row=1;Row<=numRows;Row++){
        long long ans=1;
        vector<int> ansrow;
        ansrow.push_back(ans);
        for(int i=1;i<Row;i++){
            ans=ans*(Row-i);
            ans=ans/i;
            ansrow.push_back(ans);
        }
        totalans.push_back(ansrow);
       }
       return totalans;

    }
};