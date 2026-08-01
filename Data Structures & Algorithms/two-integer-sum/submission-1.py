class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Create a simple map
        m = {}

        # Iterate through the list of numbers and save the elements
        i = 0
        for n in nums:
            m[n] = i
            i += 1
        
        # Iterate through the nums again and look for the difference in the map
        for i, n in enumerate(nums):
            diff = target - n
            if diff in m and m[diff] != i:
                return sorted([i, m[diff]])

        return []
