class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        index = 0
        for k in s:
            index = t.find(k, index)
            if index == -1:
                return False
            index += 1
        return True
