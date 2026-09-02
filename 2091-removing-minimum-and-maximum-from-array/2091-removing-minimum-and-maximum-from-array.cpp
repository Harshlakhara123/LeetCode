class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mxInd = -1;
        int mnInd = -1;
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > mx){
                mx = nums[i];
                mxInd = i;
            }
            if(nums[i] < mn){
                mn = nums[i];
                mnInd = i;
            }
        }
        int i1 = (mxInd < mnInd)?mxInd:mnInd;
        int i2 = (mxInd > mnInd)?mxInd:mnInd;
        
        return n - max({i1,i2-i1-1,n-i2-1});
    }
};