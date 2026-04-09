class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        for (char c : s) {
        if (isalnum(static_cast<unsigned char>(c))) {
            result += c;  
            }
        }
        for (char &c : result) {
        c = tolower(static_cast<unsigned char>(c));
        }
        int i=0,j=result.size()-1;
        bool palin=true;
        while(i<=j){
            if(result[i]==result[j]){
                i++;
                j--;
                palin=true;
                continue;
            }
            else{
                palin=false;
                break;
            }
        }
        return palin;
    }
};
