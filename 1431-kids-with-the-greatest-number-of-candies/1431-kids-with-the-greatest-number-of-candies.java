class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        List<Boolean> ans = new ArrayList<>();
        int mx = 0;
        for(int x : candies){
            mx = Math.max(x,mx);
        }
        for(int x : candies){
            if(mx - x <= extraCandies){
                ans.add(true);
            }
            else ans.add(false);
        }
        return ans;
    }
}