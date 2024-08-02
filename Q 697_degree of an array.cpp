class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> m;
        int maxFreq = 0;

        // find maximum frequency
        for(auto x : nums){
            m[x]++;

            if(m[x] > maxFreq){
                maxFreq = m[x];
            }
        }

        if(maxFreq == 1){
            return 1;
        }

        // for all element with frequency = maxFreq, find length
        int ans = INT_MAX;
        for(auto x : m){
            if(x.second == maxFreq){
                // find 1st and last occurance
                int l = 0, h = nums.size()-1 , first = 0, last = 0;
                int n = nums.size();

                // first 
                for(int i = 0; i < n; i++){
                    if(x.first == nums[i]){
                        first =  i;
                        break;
                    }
                }

                // last
                for(int i = n-1; i >= 0; i--){
                    if(x.first == nums[i]){
                        last =  i;
                        break;
                    }
                }

                int len = last - first + 1;
                ans = min(ans,len);
            }
        }

        return ans;
    }
};
