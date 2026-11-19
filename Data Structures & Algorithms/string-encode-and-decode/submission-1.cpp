class Solution {
public:

    string encode(vector<string>& strs) {
        string coded = "";
        for (const auto &str : strs) {
            // std::cout << str.size();
            string count = std::to_string(str.size());
            coded.append(count);
            coded.push_back('#');
            coded.append(str);
            // std::cout << count;
        }
        return coded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;

        int i = 0;
        while (i < s.length()) {
            int word_len = 0;
            int j;
            for (j = 0; j < s.length() - i; j++) {
                if (s[i+j] == '#') {
                    break;
                }
            }
            
            word_len = std::stoi(s.substr(i, j));
            std::cout << "word len" << word_len << std::endl;
            decoded.push_back(s.substr(i+j+1, word_len));
            i += word_len + j + 1; 
        }
        return decoded;
    }
};
