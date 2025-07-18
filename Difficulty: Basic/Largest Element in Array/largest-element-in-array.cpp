class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxint= *max_element(arr.begin(), arr.end());
        return maxint;
    }
    
};
