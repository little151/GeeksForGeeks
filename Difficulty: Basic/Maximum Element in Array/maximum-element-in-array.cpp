// User function Template for C++
#include <algorithm>
class Solution {
  public:
    int largest(int arr[], int n) {
        // code here
        return *max_element(arr,arr+n);
    }
    
};
