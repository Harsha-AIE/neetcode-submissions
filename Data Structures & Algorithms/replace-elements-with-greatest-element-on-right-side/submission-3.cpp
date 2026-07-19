class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int temp=arr[arr.size()-1],mx=0;
        
        for(int i=arr.size()-2;i>=0;i--){
            mx=max(temp,arr[i+1]);
            temp=arr[i];
            arr[i]=max(mx,arr[i+1]);
            
        }
        
        arr[arr.size()-1]=-1;
        return arr;
    }
};