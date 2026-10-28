class Solution {
    public int removeDuplicates(int[] nums) {
        int ans = 1;
        int j = 1;
        int last = nums[0];
        for(int i = 1 ; i < nums.length ; i++){
            if(nums[i] == last)continue;
            nums[j] = nums[i];
            last = nums[i];
            j++;
            ans++;
        }
        return ans;
    }
}