from collections import deque
def solution(n, wires):
    answer = n
    # 트리 표현 (1<= <= n), 양방향
    tree = [[] for _ in range(n+1)]     
    for a, b in wires:
        tree[a].append(b)
        tree[b].append(a)

    # 순서대로 간선 끊기
    for start, split in wires:
        visited = [False] * (n+1)
        visited[split] = True
        cnt = bfs(start, visited, tree)

        if abs(cnt - (n-cnt)) < answer:
            answer = abs(cnt - (n-cnt))


    return answer

def bfs(start, visited, tree):
    # 송전탑의 개수
    cnt = 1
    q = deque([start])
    visited[start] = True

    while q:
        v = q.popleft()
        for i in tree[v]:
            if  visited[i]:
                continue
            q.append(i)
            cnt += 1
            visited[i] = True
    return cnt
