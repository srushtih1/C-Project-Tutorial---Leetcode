class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        result = 0
        for num in nums:
            result ^= num
        
        return result
    
# do XOR --> bit manipulation for the num value for the entire value
