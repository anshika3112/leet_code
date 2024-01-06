class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int s=0;
        int e=n-1;
        int mid=0;
        while(s<e)
        {
             mid=s/2+e/2;
            if(arr[mid]<arr[mid+1])
            {
                s=mid+1; 
            }
            else
            {
                e=mid;
            }
        }
        return s;
    }
};
