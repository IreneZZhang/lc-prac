class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        std::unordered_map<char, int> smap;
        std::unordered_map<char, int> tmap;

        // Construct count to letter mapping
        for (int i = 0; i < s.length(); i++) {
            if (!smap.contains(s[i])) {
                smap.insert({s[i], 1});
            } else {
                smap[s[i]]++;
            }

            if (!tmap.contains(t[i])) {
                tmap.insert({t[i], 1});
            } else {
                tmap[t[i]]++;
            }
        }

        for (const auto &pair: smap) {
            if (!tmap.contains(pair.first)) return false;
            if (tmap[pair.first] != pair.second) return false;
        }
        return true;
    }
    
};
