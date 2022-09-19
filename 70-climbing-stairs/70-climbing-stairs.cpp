class Solution {
public:
    int climbStairs(int n) {
        int jumps[n+1];
        jumps[0]=jumps[1]=1;
        for (int i=2;i<=n;i++){
            jumps[i]=jumps[i-1]+jumps[i-2];
        }
        return jumps[n];
    }
};