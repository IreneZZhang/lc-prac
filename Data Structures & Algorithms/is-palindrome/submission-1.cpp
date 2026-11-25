class Solution {
public:
    bool isPalindrome(string s) {

        // erase non-alphanumeric chars
        s.erase(std::remove_if(s.begin(), s.end(), 
                       [](unsigned char c){return !std::isalnum(c);}), s.end());
        std::transform(s.begin(), s.end(), s.begin(), 
                       [](unsigned char c){return std::tolower(c);});
        int s_len = s.size();
        for (int i = 0; i < s_len / 2; i++) {
            if (s[i] != s[s_len-i-1]) {
                return false;
            }
        }
        return true;
    }
};
