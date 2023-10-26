class Solution {
public:
    int tribonacci(int n) {
        map<int, long long> memo;
        return helper(n, memo);
    }
    long long helper(int n,map<int, long long>& memo) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        if (memo.find(n) != memo.end()) return memo[n];

        memo[n] = helper(n - 1, memo) + helper(n - 2, memo) + helper(n - 3, memo);
        return memo[n];
    }
};
