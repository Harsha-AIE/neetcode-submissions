class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        for(int i=0;i<temperatures.size();i++){
            int count=0;
            int j=i+1;

            while(j<temperatures.size()){
                if(j==temperatures.size()-1 && temperatures[j]<=temperatures[i]){
                    count =0;
                    break;
                }
                count++;
                if(temperatures[i]<temperatures[j]){
                    break;
                }
                
                j++;
                
            }
            temperatures[i]=count;
        }return temperatures;
    }
    
};