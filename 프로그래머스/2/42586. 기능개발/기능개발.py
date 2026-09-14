from collections import deque

def solution(progresses, speeds):
    answer = []
    days = deque()
    
    # 각 기능이 완료되는 날짜 계산
    for i in range(len(progresses)):
        x = (100 - progresses[i]) / speeds[i]
        if x == int(x):
            days.append(int(x))
        else:
            days.append(int(x) + 1)
    
    
    # 함께 배포되는 기능 개수 파악
    while days:
        temp = days.popleft()
        count = 1
        
        while days and temp >= days[0]:
            days.popleft()
            count += 1
            
        answer.append(count)
    
    return answer