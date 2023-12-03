class Solution {
public:
    bool isFascinating(int n) {
    string str = to_string(n);
    int n2 = n * 2;
    int n3 = n * 3;
    str += to_string(n2);
    str += to_string(n3);
    vector<int>ans(10);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '0')
            return false; 
        ans[str[i] - '0']++;
    }

    for (int i = 1; i <= 9; i++) {
        if (ans[i] != 1)
            return false; 
    }

    return true; 
}
};
