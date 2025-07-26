// User function template for C++
class Solution {
  public:

    string removeCharacters(string& s) {
        // Your code goes here
        string res="";
        
        for(c :s){
            if(isdigit(c)){
                res+=c;
            }
        }
        return res;
    }
};