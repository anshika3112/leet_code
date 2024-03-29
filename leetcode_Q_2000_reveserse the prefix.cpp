class Solution {
public:
    string rev(string s, int n){
       for(int i = 0; i < n / 2; i++){
            swap(s[i], s[n - 1 - i]);
        }
        return s; 
    }
    string reversePrefix(string word, char ch) {
       if(word.find(ch) == string::npos){
            return word;
        }
        return rev(word, word.find(ch) + 1); 
    }
};
