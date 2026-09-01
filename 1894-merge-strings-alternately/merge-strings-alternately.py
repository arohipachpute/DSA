class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        word = ""
        for w , x in zip_longest(word1 , word2 ,  fillvalue=""):
            word += w
            word += x

        return word