class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        while(i>=0){
            if(digits[i]!=9){
                digits[i]+=1;
                return digits;
            }
            digits[i]=0;
            i--;
            
        }digits.insert(digits.begin(), 1);
        // int num=digits[0];
        // for(int i=0;i<digits.size();i++){
            
        //     num+=digits[i];
        //     num=num*10;
        // }
        return digits;
    }
};
