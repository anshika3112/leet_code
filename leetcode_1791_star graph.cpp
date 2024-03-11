#include <vector>

class Solution {
public:
    int findCenter(std::vector<std::vector<int>>& edges) {
        int n = edges.size()+1;
        
        // Assuming nodes are numbered from 1 to n
        vector<vector<int>> adjlist(n + 1);

        for (int i = 0; i < n-1; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }

        for (int i = 1; i < n+1; i++) {
            if (adjlist[i].size() == n - 1) {
                return i;
            }
        }

        return -1;
    }
};
