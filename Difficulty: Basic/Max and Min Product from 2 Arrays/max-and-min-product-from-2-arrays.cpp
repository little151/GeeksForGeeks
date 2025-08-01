#include <algorithm>

class Solution {
  public:
    // Function to find the maximum element from array a[] and
    // the minimum element from array b[] and return their product.
    long long find_multiplication(vector<int> &arr1, vector<int> &arr2) {
        // code here
       int maxint = *max_element(arr1.begin(), arr1.end());
       int minint = *min_element(arr2.begin(), arr2.end());
        
        return {maxint*minint};
    }
    
};