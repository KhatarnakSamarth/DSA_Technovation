class Solution:
    def encode(self, arr):
        cipher = ''
        for s in arr:
            cipher += str(len(s)) + '/:' + str(s)
        return cipher

    def decode(self, s):
        s = s.split('/:')
        arr = []
        l = 0
        for i in range(len(s)):
            if i == 0:
                l = int(s[i])
                continue
            arr.append(s[i][:l])
            if i != len(s)-1:
                l = int(s[i][l:])
        return arr
