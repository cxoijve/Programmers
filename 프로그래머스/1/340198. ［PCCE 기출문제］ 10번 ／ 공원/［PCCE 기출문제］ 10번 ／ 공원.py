def solution(mats, park):
    mats.sort(reverse=True)
    
    R = len(park)
    C = len(park[0])
    
    for size in mats:
        for r in range(R - size + 1):
            for c in range(C - size + 1):
                can_place = True
                
                for dr in range(size):
                    for dc in range(size):
                        if park[r+dr][c+dc] != "-1":
                            can_place=False
                            break
                    if not can_place:
                        break
    
                if can_place:
                    return size
    
    return -1