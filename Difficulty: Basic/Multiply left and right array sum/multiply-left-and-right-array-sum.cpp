//  Function to multiply the sum of first half of the array with the sum of second half
//  of the array
class Solution {
  public:
    int multiply(vector<int> &arr) {
        // code here
        int n=arr.size();
        int sum1=0, sum2=0;
        // return n;
        for(int i=0; i<n/2; ++i){
            sum1+= arr[i];
        }
        
        
        for(int i=n/2; i<n; ++i){
            sum2+= arr[i];
        }
        
        return {sum1*sum2};
    }
};