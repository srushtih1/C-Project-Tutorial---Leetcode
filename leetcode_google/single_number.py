class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        result = 0
        for num in nums:
            result ^= num
            print(result)
        
        return result
    
# do XOR --> bit manipulation for the num value for the entire value
#4^4 = 0, 4 ^ 2 = 4
#also can use hashmap to get this output for the program

