class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> out;
        map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>> paired(freq.begin(),freq.end());
        sort(paired.begin(),paired.end(),[](const auto &a,const auto &b){
            return a.second>b.second;
        });

        for(int i=0;i<paired.size() && i<k;i++){
            out.push_back(paired[i].first);
        }
        return out;
    }
};
