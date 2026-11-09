class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = strs[0];
        for (int i = 0; i < strs.size(); i++) {
            if (common == "") {
                return "";
            } else {
                string temp = "";
                int z = 0;
                while ((common[z] == strs[i][z]) && common[z] != '\0' ){
                    temp = temp + common[z];
                    z++;
                }
                common = temp;
            }
        }
        return common;
    }
};