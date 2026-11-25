class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 2;
        int left = 0;
        int product = 1;
        for(int right = 0 ; right < n ; right++){
            while(gcd(product,nums[right]) > 1)product /= nums[left++];
            product *= nums[right];
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};