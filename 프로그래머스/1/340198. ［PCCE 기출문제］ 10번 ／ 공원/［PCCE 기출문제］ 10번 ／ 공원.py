def solution(mats, park):
    # 만약 돗자리를 못 깔 경우 리턴할 최종 실패 신호 (-1)
    answer = -1

    n = len(park) # 행
    m = len(park[0]) # 열
    
    # dp[i][j] = (i, j)가 우하단일 때 만들 수 있는 최대 정사각형 한 변의 길이
    dp = [[0] * m for _ in range(n)]
    max_len = 0
    
    for i in range(n):
        for j in range(m):
            # [지도 속 빈자리 확인] park[i][j]가 지도 위의 빈자리("-1")일 때만 계산
            if park[i][j] == "-1":
                if i == 0 or j == 0:
                    dp[i][j] = 1
                else:
                    # 위, 왼쪽, 좌상단 중 가장 작은 값 + 1
                    dp[i][j] = min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]) + 1
                
                max_len = max(max_len, dp[i][j])
                
    mats.sort(reverse=True)
    for mat in mats:
        if mat <= max_len:
            answer = mat
            break                
    
    return answer