class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groupAnagram = {}

        for st in strs:
            freqArr = [0] * 26

            for ch in st:
                freqArr[ord(ch) - ord('a')] += 1

            key = tuple(freqArr)

            if key not in groupAnagram:
                groupAnagram[key] = []

            groupAnagram[key].append(st)

        return list(groupAnagram.values())
