class Solution {
  public:
    // Function to find the minimum value required to balance the array.
    int minValueToBalance(vector<int> &arr) {
        // code here
        int sum1=0;
        int sum2=0;
        int n= arr.size();
        for(int i=0; i<n/2; ++i){
            sum1+=arr[i];
            // return sum1;
            
        }
        for(int i=n/2; i<n; ++i){
            sum2+= arr[i];
            // return sum2;
        }
        return abs(sum1-sum2);
        
    }
};
