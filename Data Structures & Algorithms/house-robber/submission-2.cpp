class Solution {
public:
    vector<int> dp;
    
    int dfs(vector<int>& nums,int i){
        int n=nums.size()-1;
        if(i>n) return 0;
        if(dp[i]!=-1){
            return dp[i];
        }
        return dp[i]=max(nums[i]+dfs(nums,i+2),dfs(nums,i+1));
    }
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        dp.resize(n+1,-1);
        int i=0;
        return dfs(nums,i);
    }
};
