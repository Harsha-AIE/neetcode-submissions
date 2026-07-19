class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans(2 * nums.size(), 0);
        int n=2*nums.size();
        for(int i=0;i<n;i++){
            if(i>nums.size()-1){
                ans[i]=nums[i-nums.size()];
                continue;
            }
            ans[i]=nums[i];

        }return ans;
    }
};