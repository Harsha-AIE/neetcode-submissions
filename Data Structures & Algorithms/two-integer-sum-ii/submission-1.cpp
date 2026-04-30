class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        vector<int> out;
        while(i<j){
            if(numbers[j]+numbers[i]==target){
                out.push_back(i+1);
                out.push_back(j+1);
                break;
            }
            if(numbers[j]+numbers[i]<target){
                i++;
            }
            if(numbers[j]+numbers[i]>target){
                j--;
            }

        }
        return out;
    }
};
