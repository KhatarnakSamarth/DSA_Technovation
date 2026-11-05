class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        k, l = [], []
        a, b = 1, 1
        for i in range(len(nums)):
            a *= nums[i]
            k.append(a)
        for j in range(len(nums) - 1, -1, -1):
            b *= nums[j]
            l.append(b)
        l.reverse()
        ans = [l[1]]
        for i in range(1, len(nums)-1):
            ans.append(k[i-1]*l[i+1])
        ans += [k[-2]]
        return ans
            
