#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    // 주어진 문자열의 각 문자에 대해 반복하여 새로운 문자열을 생성합니다.
    for (char c : my_string) {
        // 각 문자를 n번씩 반복하여 추가합니다.
        for (int i = 0; i < n; ++i) {
            answer += c;
        }
    }
    return answer;
}
