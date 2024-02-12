#include <iostream>
#include <string>

using namespace std;

int solution(int a, int b){
    int answer = 0;
    
    // + 연산
    string num1 = to_string(a);
    string num2 = to_string(b);
    
    int result1 = stoi(num1 + num2);
    
    // 2 * a * b 연산
    int result2 = 2 * a * b;
    
    answer = max (result1, result2);
    
    return answer;
}