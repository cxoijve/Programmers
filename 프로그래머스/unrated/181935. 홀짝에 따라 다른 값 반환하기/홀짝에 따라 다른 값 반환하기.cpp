#include <iostream>

using namespace std;

int solution(int n) {
    int result = 0;

    if (n % 2 == 1) { // n이 홀수인 경우
        for (int i = 1; i <= n; i += 2) {
            result += i; // 홀수의 합
        }
    } else { // n이 짝수인 경우
        for (int i = 2; i <= n; i += 2) {
            result += i * i; // 짝수의 제곱의 합
        }
    }

    return result;
}

int main() {
    int n1 = 7;
    int n2 = 10;

    cout << "Result for n=7: " << solution(n1) << endl;
    cout << "Result for n=10: " << solution(n2) << endl;

    return 0;
}
