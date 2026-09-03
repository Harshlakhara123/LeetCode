class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mnOdd = INT_MAX;
        for(int i = 0 ; i < nums1.size() ; i++){
            if(nums1[i] % 2 == 1){
                mnOdd = min(mnOdd , nums1[i]);
            }
        }
        if(mnOdd == INT_MAX)return true;
        for(int i = 0 ; i < nums1.size() ; i++){
            if(nums1[i] % 2 == 0){
                if(nums1[i] - mnOdd < 1)return false;
            }
        }
        return true;
    }
};