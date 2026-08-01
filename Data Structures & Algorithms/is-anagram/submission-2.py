class Solution:
    def mapLetters(self, s: str):
        lm = {}
        for l in s:
            if l in lm:
                lm[l] += 1
            else:
                lm[l] = 1

        return lm

    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        ms = self.mapLetters(s)
        mt = self.mapLetters(t)
        for k in ms:
            if k not in mt or ms[k] != mt[k]:
                return False

        return True
