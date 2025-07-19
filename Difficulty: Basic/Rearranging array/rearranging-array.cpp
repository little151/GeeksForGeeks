

class Solution {
  public:
    vector<int> Rearrange(vector<int> arr) {
        // code here
        
        vector<int> res;
        
        int n= arr.size();
        
        sort(arr.begin(), arr.end());
        int i=0, j=n-1;
        
while(i<j){
            res.push_back(arr[i++]);
            res.push_back(arr[j--]);
            
        }
        if(i==j){
            res.push_back(arr[i]);
        }
        
        return res;
    }
};