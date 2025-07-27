class Solution {
public:
    string removeConsonants(string s) {
        string res = "";

        for (char c : s) {
            if (c == 'a' || c == 'A' ||
                c == 'e' || c == 'E' ||
                c == 'i' || c == 'I' ||
                c == 'o' || c == 'O' ||
                c == 'u' || c == 'U') {
                res += c;
            }
        }

        if (res.empty()) {
            return "No Vowel";
        }

        return res;
    }
};
