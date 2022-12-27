class Solution {
private:
    bool binary_search(vector<vector<int>>& matrix ,int k,int s,int e,int col){
        // base case 
        if(s>e){
            return 0;
        }
        int mid = s + (e-s)/2;
        int temp = matrix[mid/col][mid%col];
        if(temp == k){
            return 1;
        }
        else if(temp>k){
            return binary_search(matrix,k,s,mid-1,col);
        }
        else{
            return binary_search(matrix,k,mid+1,e,col);
        }
    }
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int e = row*col-1;
        return binary_search(matrix,target,0,e,col);
    }
};



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int e = row*col-1;
        int s=0;
        int mid = s + (e-s)/2;
        while(s<=e){
            int temp = matrix[mid/col][mid%col];
            if(temp == target){
                return 1;
            }
            else if(temp>target){
                e = mid -1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return 0;
    }
};