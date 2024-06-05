class Solution {
public:
    int minimumChairs(string s) {
        int ans = 0, count = 0;
        for(auto c: s){
            count += (c == 'E')?1:-1;
            ans = max(ans, count);
        }
        return ans;
    }
};
