//Map function
// class Solution {
// public:
//     int partitionString(string s) {
//         map<char,int>m;
//         int ans=1;
//         for(int i=0;i<s.length();i++)
//         {
//            if(m.find(s[i])!=m.end()){
//             m.clear();
//             ans++;
//             m[s[i]]++;}
//             else
//             {
//                 m[s[i]]++;
//             }
//         }
//         return ans;
//     }
// };
// using set
class Solution{
    public:
    int partitionString(string s) {
        set<char> st;
        int ans=0;
        for(int i=0;i<s.size();i++){
            while(st.find(s[i])==st.end()&&i<s.size())
            {
                st.insert(s[i]);
                i++;
            }
            i--;
            ans++;
            st.clear();
        }
        return ans;
    }
};
