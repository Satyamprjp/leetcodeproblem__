class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        long long ans = 0;
        int even = 1, odd = 0;   
        int prefix = 0;         

        for (int x : arr) {
            prefix = (prefix + x) % 2;
            if (prefix == 0) {
                ans += odd;
                even++;
            } else {
                ans += even;
                odd++;
            }
            ans %= MOD;
        }
        return ans;
    }
};