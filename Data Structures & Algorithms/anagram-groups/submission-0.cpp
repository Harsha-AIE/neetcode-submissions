class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> out;
        string ival,jval,si,sj;
        int k=0;
        
        int n=strs.size();
        vector<bool> used(n, false);

        for(int i=0;i<n;i++){
            if(used[i]) continue;
            ival=strs[i];
            sort(ival.begin(),ival.end());
            si=ival;

            vector<string> group;
            group.push_back(strs[i]);
            used[i]=true;
            for(int j=0;j<n;j++){
                if(used[j]) continue;
                jval=strs[j];
                sort(jval.begin(),jval.end());
                sj=jval;
                if(si==sj){
                    group.push_back(strs[j]);
                    used[j]=true;
                }

            }k++;
            out.push_back(group);
           
        }
        return out;
    }
};
