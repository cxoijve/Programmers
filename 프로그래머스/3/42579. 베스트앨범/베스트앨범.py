from collections import defaultdict
from heapq import heappop, heappush

def solution(genres, plays):
    answer = []
    
    music = defaultdict(list)
    play = defaultdict(int)
    
    for i in range(len(genres)):
        heappush(music[genres[i]], (-plays[i], i))
        play[genres[i]] += plays[i]
        
    play = sorted(list(play.items()), key=lambda x : x[1])
    
    for i in range(len(music)):
        genre = play.pop()[0]
        
        try:
            answer.append(heappop(music[genre])[1])
            answer.append(heappop(music[genre])[1])
        except:
            continue
    
    return answer