class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    return true;
                }
                
            }i++;
           
        } return false;
    }
};