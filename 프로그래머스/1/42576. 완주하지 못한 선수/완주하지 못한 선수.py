def solution(participant, completion):
    # 1. Hash dict 만들기
    hashDict = {}
    sumHash = 0
    
    # 2. Participant 의 sum hash 구하기
    for part in participant:
        hashDict[hash(part)] = part
        sumHash += hash(part)
    
    # 3. Completion 의 sum hash 빼기
    for comp in completion:
        sumHash -= hash(comp)
    
    # 4. 남은 값 리턴
    return hashDict[sumHash]