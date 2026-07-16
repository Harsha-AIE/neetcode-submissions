class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int mx=0,sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                sum+=nums[i];
            }
            else if(nums[i]<=nums[i-1]){
                mx=max(mx,sum);
                sum=0;
                sum+=nums[i];
            }
        }mx=max(mx,sum);
        return mx;
    }
};