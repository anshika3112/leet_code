class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int n=row*col;
        int s=0;
        int e=n-1;
        int mid;
        while(s<=e)
        {
           mid=s+(e-s)/2;
           int rowindex=mid/col;
           int colindex=mid%col;
           int curnumber=matrix[rowindex][colindex];
           if(curnumber== target)
           return true;
           else if(curnumber<target)
           s=mid+1;
           else
           e=mid-1; 
        }
        return false;
    }
};
