class Solution(object):
    def dominantIndex(self, nums):
        maxnum = max(nums)
        maxindex = nums.index(max(nums))
        nums.pop(maxindex)
        counter = 0
        for i in nums:
            if(i*2<=maxnum):
                counter+=1
            else:
                counter = 0
                break
                
        if counter>0:
            return maxindex
        else:
            return -1;
    
        
        