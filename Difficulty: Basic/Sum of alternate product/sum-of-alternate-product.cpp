#include <algorithm>

class Solution {
  public:
    int altProduct(vector<int>& arr) {
        // Your code goes here
        sort(arr.begin(), arr.end());
        int n= arr.size();
        int res=0;
        
        for(int i=0; i<n/2; ++i){
            res+=arr[i]*arr[n-i-1];
        }
        return res;
    }
};