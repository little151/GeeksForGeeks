class Solution
{
public:
    string reciprocalString(string s)
    {
        // Write Your code here
        int n=s.size();
        
        for (int i=0; i<n; ++i){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]= 'Z'- (s[i]- 'A');
            }
            else if(s[i]>='a' && s[i]<='z'){
                s[i]= 'z'- (s[i]- 'a');
            }
        }
        return s;
    }
};