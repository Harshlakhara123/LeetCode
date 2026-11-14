class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;
        
        for(int size = l ; size <= r ; size++){
            int sum = 0;
            for(int i = 0 ; i < size ; i++){
                sum += nums[i];
            }
            if(sum>0)ans = min(ans,sum);
            int end = size;
            int ind = 0;
            while(end < n){
                sum += (nums[end++]-nums[ind++]);
                if(sum>0)ans = min(ans,sum);
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};