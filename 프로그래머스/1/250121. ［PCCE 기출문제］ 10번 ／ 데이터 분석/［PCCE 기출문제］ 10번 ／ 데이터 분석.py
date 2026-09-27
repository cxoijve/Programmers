def solution(data, ext, val_ext, sort_by):
    col_idx = {"code": 0, "date": 1, "maximum": 2, "remain": 3}
    filtered_data = []
    
    val_ext = int(val_ext)
    
    for d in data:
        if d[col_idx[ext]] < val_ext:
            filtered_data.append(d)

    answer = sorted(filtered_data, key=lambda x: x[col_idx[sort_by]])
    return answer