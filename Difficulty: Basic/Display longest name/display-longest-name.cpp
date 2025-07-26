
class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        string res="";
        
        for(const string& s: arr){
            if (s.length()>res.length()){
                res=s;
            }
        }
        return res;
    }
};
