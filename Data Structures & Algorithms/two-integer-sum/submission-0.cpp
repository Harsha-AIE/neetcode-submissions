class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i =0;
        vector<int> out={};
        int n=nums.size();
        while(i<n){
            for(int j=i+1;j<n;j++){
                if(nums[i] + nums[j] == target){
                    out.push_back(i);
                    out.push_back(j);
                    return out;
                }
            }
            i++;
        }
    }
};
