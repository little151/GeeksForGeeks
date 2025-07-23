// User function Template for C++

class Solution {
  public:
    int RedOrGreen(int N, string S) {
        // code here
        int g=0;
        int r=0;
        
        for (char c : S){
            if (c=='R'){
                r++;
            }
            else if(c=='G'){
                g++;
            }
        }
        
        if (g>r){
            return r;
        }
        else {
            return g;
        }
    }
};