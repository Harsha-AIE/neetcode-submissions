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
        int i=0,j=heights.size()-1;
        int w_max=0;
        while(i<j){
            w_max=max(w_max,(j-i)*min(heights[i],heights[j]));
            if(heights[i]>heights[j]){
                j--;}
            else{
                i++;
            }
        
            
        }return w_max;
    }
};
