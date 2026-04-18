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
        if(s==0){return 0;}
        
        int maxa=nums[0];
        //cout<<"maxa[0]: "<<maxa<<endl;
        vector<int> prefix(s);//prefix sum
        prefix[0]=nums[0];
        for(int i=1;i<s;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        int curr;
        for(int i=1;i<=s;i++){
            for(int j=0;j<s;j++){
                //cout<<"entered"<<endl;
                if(j-i<0){
                    curr=prefix[j];
                    //cout<<"if"<<endl;
                }
                else{
                    //cout<<"entered else"<<endl;
                curr=prefix[j]-prefix[j-i];}
                maxa=max(maxa,curr);
            }
        }
        return maxa;
    }
};
