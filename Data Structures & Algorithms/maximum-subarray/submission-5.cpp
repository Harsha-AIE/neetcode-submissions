class Solution {
public:
    int max(int a,int b){
        if(a>b){
            return a;
        }
        else{return b;}
    }
    int maxSubArray(vector<int>& nums) {
        int s=nums.size();
        if(s==0){return 0,0;}
        int maxa=nums[0];
        int curr=nums[0];
        if(s==1){return maxa;}
        for(int i=1;i<s;i++){
            curr=max(nums[i],curr+nums[i]);
            maxa=max(maxa,curr);
        }
        return maxa;
    }
};
