class Solution {
public:
    string getHint(string secret, string guess) {
        int count = 0;
        int mount = 0; 
        string ans = "";
        int hash[256] = {};
        for(int i = 0; i<secret.length();i++) {
            if(secret[i] == guess[i]) {
                count++;
            }
        }
        for(int i = 0; i < secret.length();i++) {
            hash[secret[i]]++;
        }
        for(int i = 0; i < guess.length();i++) {
            if(hash[guess[i]] > 0) { 
                mount++; 
                hash[guess[i]]--; 
            }
        }
         mount -= count;
        ans += to_string(count) + 'A' + to_string(mount) + 'B'; 
        return ans;
    }
};
