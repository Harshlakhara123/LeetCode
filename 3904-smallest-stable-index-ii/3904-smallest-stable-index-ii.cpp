class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>mini(n,INT_MAX);
        int mn = INT_MAX;
        for(int i = n-1 ; i >= 0 ; i--){
            if(nums[i] < mn)mn = nums[i];
            mini[i] = mn;
        }
        int mx = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] > mx)mx = nums[i];
            int score = mx-mini[i];
            if(score <= k)return i;
        }
        return -1;
    }
};