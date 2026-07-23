class Solution {
public:
    vector<int> dp;
    int mincost(vector<int>& cost,int n){
        if(n==0) return cost[0];
        if(n==1) return cost[1];
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=cost[n]+min(mincost(cost,n-1),mincost(cost,n-2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        dp.resize(n,-1);
        return min(mincost(cost,n-1),mincost(cost,n-2));
    }
};