class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        
        while (l <= r) {
            int mid = l + (r - l) / 2;  // safe mid calculation
            
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                l = mid + 1;  // move right
            } else {
                r = mid - 1;  // move left
            }
        }
        return -1;  // not found
    }
};
