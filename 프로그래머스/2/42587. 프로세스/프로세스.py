def solution(priorities, location):
    answer = 0
    priority = [(i, j) for i, j in enumerate(priorities)]
    max_priority = max(row[1] for row in priority)
    
    while len(priority):
        a = priority.pop(0)
        if a[1] == max_priority:
            answer += 1
            if a[0] == location:
                break
            max_priority = max(row[1] for row in priority)
            
        else:
            priority.append(a)
    
    return answer