class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        vector<int>nxt(10001,-1);
        for(int i = 0 ; i < nums2.size() ; i++){
            while(!st.empty() && nums2[st.top()] < nums2[i]){
                nxt[nums2[st.top()]] = nums2[i];
                st.pop();
            }
            st.push(i);
        }
        vector<int>ans(nums1.size());
        for(int i = 0 ; i < nums1.size() ; i++){
            ans[i] = nxt[nums1[i]];
        }
        return ans;
    }
};