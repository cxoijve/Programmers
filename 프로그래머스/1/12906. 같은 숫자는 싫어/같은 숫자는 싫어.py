def solution(arr):
    # 배열에서 연속된 중복 요소를 제거하는 알고리즘
    stack = [-1]
    for i in range(len(arr)):
        if stack[-1] != arr[i]:
            stack.append(arr[i])
    return stack[1:]