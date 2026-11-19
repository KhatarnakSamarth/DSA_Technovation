class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> colors = {{0, 0}, {1, 0}, {2, 0}};
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                colors[0] += 1;
            } else if (nums[i] == 1) {
                colors[1] += 1;
            } else {
                colors[2] += 1;
            }
        }

        int j = 0;
        for (auto x : colors) {
            while (x.second > 0) {
                nums[nums.size() - j - 1] = x.first;
                j++;
                x.second--;
            }
        }
    }
};
