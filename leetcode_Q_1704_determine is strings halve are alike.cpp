class Solution {
public:
    bool halvesAreAlike(string s) {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
         int num1 = numberOfVowels(s, s.length() / 2, 0, vowels);
        int num2 = numberOfVowels(s, s.length(), s.length() / 2, vowels);
        
        return num1 == num2;
    }
    private:
    int numberOfVowels(string& s, int index, int start, const set<char>& vowels){
        int count=0;
        for (int i = start; i < index; i++) {
            if (vowels.count(s[i]) > 0) {
                count++;
            }
        }
        return count;
    }
};
