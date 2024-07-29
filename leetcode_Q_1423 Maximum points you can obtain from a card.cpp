class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans=0;
        int n=cardPoints.size();
        for(int i=0;i<k;i++){
            ans+=cardPoints[i];
        }
        int sum=ans;
        for(int i=0;i<k;i++){
            sum=sum-cardPoints[k-i-1]+cardPoints[n-1-i];
            ans=max(ans,sum);
        }
        return ans;
    }
};
