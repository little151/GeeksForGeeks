// User function template for C++
#include <algorithm>
class Solution {
  public:
    int maxDays(vector<int> &arr) {
        // code here
       int maxint= *max_element(arr.begin(), arr.end());
       
    return maxint;
    }

};