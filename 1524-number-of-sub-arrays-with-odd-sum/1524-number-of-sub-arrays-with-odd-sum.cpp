class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int mod = 1e9+7;
        int n = arr.size();
        vector<int>pre(n+1,0);
        vector<int>odds(n+1,0);
        for(int i = 0 ; i < n ; i++){
            pre[i+1] = pre[i] + arr[i];
            odds[i+1] = odds[i] + (pre[i+1]%2);
        }
        int ans = 0;
        for(int i = 1 ; i <= n ; i++){
            int o = odds[i-1];
            int e = i - odds[i-1];
            int ex = (pre[i]%2 == 1)?e:o;
            ans = (ans+ex)%mod;
        }
        return ans;
    }
};