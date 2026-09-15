import heapq

def solution(operations):
    answer = [] # 최종 결과
    q = [] # 숫자들이 실제로 저장되고 관리될 빈 큐
    
    for operation in operations:
        x, num = operation.split()
        num = int(num)
        
        if x == 'I':
            heapq.heappush(q, num)
        elif x == 'D' and num == 1:
            if len(q) != 0:
                max_value = max(q)
                q.remove(max_value)
        else:
            if len(q) != 0:
                heapq.heappop(q)
                
    if len(q) == 0:
        answer = [0, 0]
    else:
        answer = [max(q), heapq.heappop(q)]
    
    return answer