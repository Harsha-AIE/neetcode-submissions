class Solution {
public:
    int max(int a,int b){
        if(a>b){
            return a;

        }
        else{return b;}
    }
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){return 0;}
        if(s.size()==1){return 1;}
        map<char,int> chmp;
        int i=0,mxl=1;
        chmp[s[i]]++;
        for(int j=1;j<s.size();j++){
            chmp[s[j]]++;
            if(chmp[s[j]]==1){
                mxl=max(mxl,j-i+1);
            }
            else{
                while(chmp[s[j]]>1){
                    chmp[s[i]]--;
                    i++;
                }
                
               
            }
            
        }
        return mxl;
    }
};
