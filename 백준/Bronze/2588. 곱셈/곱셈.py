# 입력값
num1 = int(input())
num2 = int(input())

# 출력
print(num1 * (num2 % 10))
print(num1 * ((num2 % 100) // 10))
print(num1 * (num2 // 100))
print(num1 * num2)