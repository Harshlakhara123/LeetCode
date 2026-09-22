class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long>prev(k,0);
        prev[nums[0]%k] = 1;
        vector<long long>ans = prev;
        for(int i = 1 ; i < n ; i++){
            vector<long long>curr(k,0);
            int rem = nums[i]%k;
            curr[nums[i]%k]++;
            for(int r = 0 ; r < k ; r++){
                if(prev[r] > 0){
                    int ind = (1LL*r*rem)%k;
                    curr[ind] += prev[r];
                }
            }
            for (int r = 0; r < k; r++) {
                ans[r] += curr[r];
            }
            prev = curr;
        }
        return ans;
    }
};