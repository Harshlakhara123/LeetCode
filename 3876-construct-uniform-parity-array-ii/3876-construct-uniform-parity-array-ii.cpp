class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = INT_MAX;
        int count = 0;
        for(int i = 0 ; i < nums1.size() ; i++){
            mn = min(mn,nums1[i]);
            if(nums1[i] % 2 == 1)count++;
        }
        return mn%2 == 1 || count  == 0;
    }
};