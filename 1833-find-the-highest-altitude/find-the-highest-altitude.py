class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        alt = 0
        ans = 0
        for num in gain:
            alt = alt + num
            ans = max(alt, ans)

        return ans