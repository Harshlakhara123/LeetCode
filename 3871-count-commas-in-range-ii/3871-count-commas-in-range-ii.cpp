class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long nums[] = {0 , 1000 , 1000000 , 1000000000 , 1000000000000 , 1000000000000000};
        for(int i = 5 ; i >= 0 ; i--){
            if(n >= nums[i]){
                ans += (long long)i * (n - nums[i] + 1);
                n = nums[i] - 1;
            }
        }
        return ans;
    }
};