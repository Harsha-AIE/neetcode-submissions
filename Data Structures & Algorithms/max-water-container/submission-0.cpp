class Solution {
public:
    int max(int a,int b){
        if(a>b){
            return a;
        }
        else{return b;}
    }
    int min(int a,int b){
        if(a>b){
            return b;
        }
        else{return a;}
    }
    int maxArea(vector<int>& heights) {
        int w_max=0,h_max;
        int j=heights.size()-1;
        for(int i=0;i<heights.size();i++){
            while(i<j){
                int h=min(heights[i],heights[j]);
                int b=j-i;
                w_max=max(w_max,b*h);
                j--;
            }
            j=heights.size()-1;
        }
        return w_max;
    }
};
