class Solution {
public:
int maxvec(vector<int>& lis){
    int maxval=1;
    for(int i=0;i<lis.size();i++){
        if(maxval<lis[i]){
            maxval=lis[i];
        }
    }
    return maxval;
}
int max(int a,int b){
        if(a>b){
            return a;
        }
        else{return b;}
    }
    int longestMonotonicSubarray(vector<int>& nums) {
        int s=nums.size();
        if(s==0){return 0;}
        if(s==1){return 1;}
        vector<int> lis_a(s,1),lis_d(s,1);
        for(int i=1;i<s;i++){
            if(nums[i-1]<nums[i]){
                lis_a[i]=lis_a[i-1]+1;
            }
            if(nums[i-1]>nums[i]){
                lis_d[i]=lis_d[i-1]+1;
            }
        }
        int maxa=maxvec(lis_a);
        int maxd=maxvec(lis_d);
        return max(maxa,maxd);
    }
};