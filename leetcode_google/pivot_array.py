class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        sumLeft, sumRight = 0 , sum(nums)
        for idx, ele in enumerate(nums):
            sumRight -=ele

            if(sumLeft == sumRight):
                return idx
            sumLeft+=ele
        
        return -1

#above is the best solution. Time compelexity = O(n) , spcae = O(1)

class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        sumLeft = [0]*len(nums)
        sumRight = [0]*len(nums)
        amount = 0
        sum1 = 0
        sumLeft[0] = amount
        
        for i in range(1,len(nums)):
            sumLeft[i] = amount + nums[i-1]
            amount= sumLeft[i]
        print(sumLeft)

        #sumRight[len(nums)-1] = 0
        for i in range(len(nums)-2,-1,-1):
            print(i)
            sumRight[i] = sum1 + nums[i+1]
            print("sum - %i " %sumRight[i])
            sum1 = sumRight[i]
        if(len(nums)>1):
            sumRight[0] = sum1 + nums[1]
        else:
            return 0
        
        print(sumRight)

        for i in range(0,len(sumLeft)):
            if(sumLeft[i]==sumRight[i]):
                return i
        return -1
                
#my solution. Time compelexity = O(2n) ~ O(n) , spcae = O(1)



