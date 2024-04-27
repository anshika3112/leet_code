class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string>cities;
       for(const auto& path:paths)
       cities.insert(path[0]);
       for(const auto&path:paths){
        string dest=path[1];
        if(cities.find(dest)==cities.end())
        return dest;
       }
       return "";
    }
};
