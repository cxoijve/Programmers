def solution(participant, completion):
    hashDict = {}
    sumHash = 0
    
    # Participant의 sum(hash) 구하기
    for part in participant:
        hashDict[hash(part)] = part
        sumHash += hash(part)
    
    # completion의 sum(hash) 빼기
    for comp in completion:
        sumHash -= hash(comp)

    return hashDict[sumHash]