class Solution {
public:
int expand(string s,int i,int j){
  int c=0;
  while(i>=0 && j<s.length() && s[i]==s[j])
  {
      c++;
      i--;
      j++;
  }
  return c;
}
    int countSubstrings(string s) {
        int total=0;
        for(int i=0;i<s.size();i++)
        {
         //odd
         int odd= expand(s,i,i);
         // even
         int even=expand(s,i,i+1);
         total=total+even+odd;
        }
        return total;
    }
};
