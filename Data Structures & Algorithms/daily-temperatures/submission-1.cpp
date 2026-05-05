class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        for(int i=0;i<temperatures.size();i++){
            // if(i==temperatures.size()-1){temperatures[i]=0;}

            while(st.size()!=0 && temperatures[st.top()]<temperatures[i]){
                
                temperatures[st.top()]=i-st.top();
                st.pop();

            }
            st.push(i);
        }
        while(st.size()!=0){   
            temperatures[st.top()]=0;
            st.pop();      
        }
        return temperatures;
    }
    
};