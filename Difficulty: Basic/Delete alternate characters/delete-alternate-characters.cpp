// User function Template for C++
class Solution {
  public:
    string delAlternate(string s) {
        // code here
        int n= s.size();
        string t="";
        
        for (int i=0; i<n; ++i){
            if (i%2==0){
                t+=s[i];
            }
        }
        return t;
    }
};