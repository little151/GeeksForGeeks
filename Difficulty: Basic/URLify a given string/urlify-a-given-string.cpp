// User function Template for C++
class Solution {
  public:
    string URLify(string& s) {
        // code here
        string res;
        
        for (c : s){
            if (c   ==' '){
                res += "%20";
            }
            else{
                res+=c;
            }
        }
        
        return res;
        
    }
};