#include <string>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    // my_string의 시작부터 s까지의 부분 + overwrite_string + my_string의 s + overwrite_string 길이 이후의 부분
    return my_string.substr(0, s) + overwrite_string + my_string.substr(s + overwrite_string.length());
}

// 테스트
#include <iostream>

int main() {
    cout << solution("He11oWor1d", "lloWorl", 2) << endl;  // "HelloWorld" 출력
    cout << solution("Program29b8UYP", "merS123", 7) << endl;  // "ProgrammerS123" 출력

    return 0;
}
