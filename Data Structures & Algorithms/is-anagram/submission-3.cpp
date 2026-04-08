#include<algorithm>
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> smp,tmp;
        for(char c:s){
            smp[c]++;
        }
        for(char p:t){
            tmp[p]++;
        }
        map<char,int> sz=(smp.size()>tmp.size())?smp:tmp;
        for(auto i:sz){
            if(smp[i.first]!=tmp[i.first]){
                return false;
            }
        }return true;
    }
};

