class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        vector<vector<int>>v;
        int min_diff=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++)
        {
            int diff=arr[i+1]-arr[i];
            if(diff<min_diff)
                min_diff=diff;
        }
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i+1]-arr[i]==min_diff)
                v.push_back({arr[i],arr[i+1]});
        }
        return v;
    }
};
