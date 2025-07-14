#include <algorithm>

class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
        // Your code goes here
        sort(arr.begin(), arr.end());
        int n=arr.size();
        
        for (int i=0; i<n-2; ++i){
            cout<<" "<<arr[i];
        }
        
    }
};