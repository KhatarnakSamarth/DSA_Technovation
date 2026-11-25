
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        if (n == 0) return 0;

        vector<int> leftMax(n);
        vector<int> rightMax(n);

        vector<int> water;

        leftMax[0] = height[0];

        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], height[i]);
        }

        rightMax[n - 1] = height[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }

        int maxwater = 0;

        for (int j = 0; j < n; j++) {
            int w = min(leftMax[j], rightMax[j]) - height[j];
            maxwater += w;
        }

        return maxwater;
    }
};
