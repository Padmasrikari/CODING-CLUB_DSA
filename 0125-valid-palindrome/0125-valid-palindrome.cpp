class Solution {
public:
    bool isPalindrome(string s) {

        int size = s.size();
        string r = "", st = "";

        for(int i = 0; i < size; i++) {
            if(isalnum(s[i])) {
                st += tolower(s[i]);
            }
        }

        for(int i = size - 1; i >= 0; i--) {
            if(isalnum(s[i])) {
                r += tolower(s[i]);
            }
        }

        return st == r;
    }
};