class Solution {
public:
    long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k) {
        int s=nums1.size();
        int s2=nums2.size();
        vector<long long> prod(s*s2,0);
        for(int i=0;i<s;i++){
            for(int j=0;j<s2;j++){
                prod[i*s2+j]=nums1[i]*nums2[j];
            }
        }
        sort(prod.begin(),prod.end());
        // for(int i=0;i<s;i++){
        //     for(int j=0;j<s;j++){
               
        //         cout<<prod[i*s+j]<<endl;
        //     }
        // }
        return prod[k-1];
    }
};