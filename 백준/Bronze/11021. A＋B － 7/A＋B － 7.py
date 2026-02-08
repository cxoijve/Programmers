T = int(input())                  # 테스트 케이스 개수

for i in range(1, T + 1):         # Case #1부터 시작해야 하기 때문
    a, b = map(int, input().split()) 
    print("Case #" + str(i) + ":", a + b)   # i 출력 시 str(i) 사용