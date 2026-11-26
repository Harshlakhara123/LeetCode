class Solution {
public:
    bool canAliceWin(int n) {
        int current = 10;
        while(n>=0){
            if(current > n)return false;
            n -= current;
            if(current - 1 > n)return true;
            n -= (current - 1);
            current-=2;
        }
        return true;
    }
};