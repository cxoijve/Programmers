def now_alpha(target):
    return min(ord(target)-ord("A"), ord("Z")-ord(target)+1)

def solution(name):
    answer = 0
    length = len(name)
    
    left = 0
    move = length - 1
    
    while left < length:
        answer += now_alpha(name[left])
        
        right = left + 1
        
        while right < length and name[right] == "A":
            right += 1
            
        move = min(move, left * 2 +length - right, (length - right) * 2 + left)
        left = right
    
    answer += move
    
    
    return answer