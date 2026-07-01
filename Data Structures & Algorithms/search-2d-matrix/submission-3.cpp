class Solution {
public:
    int binary_search(vector<vector<int>>& matrix,int row, int target){
        int l = 0, r = matrix[0].size() - 1;
        
        while (l <= r) {
            int mid = l + (r - l) / 2;  // safe mid calculation
            
            if (matrix[row][mid] == target) {
                return true;
            } else if (matrix[row][mid] < target) {
                l = mid + 1;  // move right
            } else {
                r = mid - 1;  // move left
            }
        }
        return false;  // not found

    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,cols=matrix[0].size();
        for(i=0;i<matrix.size();i++){
            if(target>=matrix[i][0] && target<=matrix[i][cols-1]){
                return binary_search(matrix,i,target);
            }
        }
        return false;
    }
};
