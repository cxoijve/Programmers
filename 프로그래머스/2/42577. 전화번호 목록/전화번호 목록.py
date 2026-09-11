def solution(phone_book):
    hash_map = {}
    
    # 모든 번호를 hash_map에 먼저 저장
    for phone_number in phone_book:
        hash_map[phone_number] = True
        
    # 이제 hash_map에 모든 번호가 있으니, 접두어 확인 가능
    for phone_number in phone_book:
        for i in range(1, len(phone_number)):
            prefix = phone_number[:i]
            if prefix in hash_map:
                return False
            
    return True