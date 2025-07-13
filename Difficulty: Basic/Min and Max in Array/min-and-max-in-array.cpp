// User function Template for C++
#include <algorithm>

class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        // for (int i=0; i<arr.size(); ++i){
        //     return 
        // }
        // int n = arr.size();
        int minval= *min_element(arr.begin(), arr.end());
        int maxval= *max_element(arr.begin(), arr.end());
        
        return {minval, maxval};
        // return maxval;
        
    }
};