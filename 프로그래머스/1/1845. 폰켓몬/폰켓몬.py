from collections import Counter

def solution(nums):
    
    myPocketmonNum = len(nums)//2
    
    countDict = dict(Counter(nums))
    
    if (len(countDict) >= myPocketmonNum):
        return myPocketmonNum
    else : 
        return len(countDict)