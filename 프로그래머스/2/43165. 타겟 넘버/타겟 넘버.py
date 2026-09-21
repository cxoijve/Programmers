def solution(numbers, target):
    leaves = [0]
    count = 0
    
    for num in numbers:
        temp = []
        
        for leaf in leaves:
            temp.append(leaf + num)
            temp.append(leaf - num)
            
        leaves = temp
        
    # 모든 경우의 수 계산 후 target과 같은지 확인 
    for leaf in leaves:
        if leaf == target:
            count += 1
            
    return count