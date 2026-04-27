class Solution {
public:
    int lengthOfLastWord(string s) {
        int size=0;
        bool occur=false;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                occur=true;
                size++;
            }
            if(occur && s[i]==' '){
                return size;
            }
        }return size;
    }
};