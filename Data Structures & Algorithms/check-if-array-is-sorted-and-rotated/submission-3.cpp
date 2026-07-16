class Solution {
public:
    bool check(vector<int>& nums) {
        int ct = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1])
                ct++;
        }

        if (nums.back() > nums.front())
            ct++;

        return ct <= 1;
    }
};