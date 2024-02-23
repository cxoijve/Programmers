#include <string>
#include <vector>
#include <map>

using namespace std;
map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},{"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
long long solution(string numbers) {

    string temp = ""; // 현재 분석 중인 단어를 저장
    long long answer = 0; // 결과 값을 저장할 변수

    for(int i = 0; i < numbers.length(); i++) {
        temp += numbers[i]; // 현재 인덱스의 문자를 temp에 추가
        // 현재 temp가 numMap에 있는지 확인
        if(numMap.find(temp) != numMap.end()) {
            answer = answer * 10 + numMap[temp]; // 매핑된 숫자를 answer에 추가
            temp = ""; // temp 초기화
        }
    }
    
    return answer;
}
