def solution(answers):
    answer = []
    
    p1 = [1, 2, 3, 4, 5]
    p2 = [2, 1, 2, 3, 2, 4, 2, 5]
    p3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    score = [0, 0, 0]
    
    for i, v in enumerate(answers):
        if v == p1[i%len(p1)]:
            score[0] += 1
        if v == p2[i%len(p2)]:
            score[1] += 1
        if v== p3[i%len(p3)]:
            score[2] += 1
            
    max_score = max(score)
    for j, v in enumerate(score):
        if v == max_score:
            answer.append(j + 1)
            
    return answer