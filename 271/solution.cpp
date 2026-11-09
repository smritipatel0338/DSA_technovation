#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string encode(vector<string>& arr) {
        string encoded = "";
        for (string& s : arr) {
            encoded += to_string(s.length()) + "/:" + s;
        }
        return encoded;
    }

    vector<string> decode(string& s) {
        vector<string> decoded;
        int i = 0;
        int n = s.length();
        
        while (i < n) {
            size_t delim_idx = s.find("/:", i);
            if (delim_idx == string::npos) break;
            
            int len = stoi(s.substr(i, delim_idx - i));
            i = delim_idx + 2;
            
            decoded.push_back(s.substr(i, len));
            i += len;
        }
        return decoded;
    }
};
