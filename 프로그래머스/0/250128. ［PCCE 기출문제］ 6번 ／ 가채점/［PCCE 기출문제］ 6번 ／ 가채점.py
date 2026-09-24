def solution(numbers, our_score, score_list):
    answer = []
    for i in range(len(numbers)):
        if numbers[our_score[i]] == score_list[i]:
            answer.append("Same")
        else:
            answer.append("Different")
    
    return answer