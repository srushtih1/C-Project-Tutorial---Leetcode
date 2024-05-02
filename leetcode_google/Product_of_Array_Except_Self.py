class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        answer = [1]*len(nums)
        product = 1
        temp1 = 1
        for idx,ele in enumerate(nums):
            answer[idx] = product
            product *= ele
        
        for i in range(len(nums)-1,-1,-1):
            answer[i] *= temp1
            temp1 *= nums[i] 

        return answer

#here in the for loop --> if we want to include 0 index add {len(nums)-1 , -1, -1} when we go in reverse array
#when going in left to right direction --> {0 to len(nums)} --> Here len(nums) is excluded
#Time complexity --> O(n), Space --> O(1)

#time complexity for nested loops only is - O(n^2)