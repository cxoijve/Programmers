def solution(data, ext, val_ext, sort_by):
    col_idx = {"code": 0, "date": 1, "maximum": 2, "remain": 3}
    filtered_data = []
    
    # 문자열/숫자 타입 차이를 방지하기 위해 정수로 변환
    val_ext = int(val_ext)
    
    for d in data:
        # ext에 해당하는 값이 val_ext보다 작은지 비교
        if d[col_idx[ext]] < val_ext:
            filtered_data.append(d)
            
    # sort_by에 해당하는 값을 기준으로 오름차순 정렬
    answer = sorted(filtered_data, key=lambda x: x[col_idx[sort_by]])
    
    return answer