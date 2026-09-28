def solution(video_len, pos, op_start, op_end, commands):
    # 시간을 초(초 단위)로 변환하는 함수
    def time_to_sec(t):
        m, s = map(int, t.split(':'))
        return m * 60 + s
    
    # 초를 다시 "mm:ss" 문자열로 변환하는 함수
    def sec_to_time(s):
        m = s // 60
        sec = s % 60
        return f"{m:02d}:{sec:02d}"
    
    # 주어진 시간들을 모두 초로 변환
    video_sec = time_to_sec(video_len)
    pos_sec = time_to_sec(pos)
    op_start_sec = time_to_sec(op_start)
    op_end_sec = time_to_sec(op_end)
    
    # 초기 위치가 오프닝 구간에 속하는지 확인
    if op_start_sec <= pos_sec <= op_end_sec:
        pos_sec = op_end_sec
        
    for cmd in commands:
        if cmd == "prev":
            pos_sec = max(0, pos_sec - 10)
        elif cmd == "next":
            pos_sec = min(video_sec, pos_sec + 10)            
        
        if op_start_sec <= pos_sec <= op_end_sec:
            pos_sec = op_end_sec
    
    
    return sec_to_time(pos_sec)