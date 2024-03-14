class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for (string& w : words) {
            string temp = "";
            for (char& c : w) {
                if (c != separator) {
                    temp += c;
                } else if (temp != "") {
                    ans.push_back(temp);
                    temp = "";
                }
            }
            if (temp != "" && temp.back() != separator) {
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
