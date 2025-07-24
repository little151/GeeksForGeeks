// User function Template for C++

class Solution {
  public:
    int countWords(string &s) {

        // Your code here
        int count=1;
        for(c:s){
            if (c== ' '){
                count++;
            }
        }
        
        return count;
    }
};
