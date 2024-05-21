def canCompleteCircuit(nums: list[int]):
        index=nums.index(min(nums))
        m=len(nums)-index
     #    print(m)
        if(nums[index-1]>=m):
            return True
        else:
            return False
            

if __name__=='__main__':
     print(canCompleteCircuit([3,2,1,0,4]))