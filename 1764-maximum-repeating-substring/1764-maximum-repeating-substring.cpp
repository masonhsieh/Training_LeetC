class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int cnt = 0;
        string tmp = word;
        while (sequence.find(tmp) != std::string::npos) {
            cnt++;
            tmp += word;
        }

        return cnt;
    }
};