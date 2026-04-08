class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count_zeroes=0;
        int prod=1;
        vector<int> out(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count_zeroes++;
                continue;
            }
            prod=nums[i]*prod;
        }
        for(int i=0;i<nums.size();i++){
            
            if(count_zeroes>1){
                 continue;
            }
            if(count_zeroes==1){
                if(nums[i]==0){out[i]=prod;}
                continue;
            }
            out[i]=prod/nums[i];
        }
        return out;
    }
};
