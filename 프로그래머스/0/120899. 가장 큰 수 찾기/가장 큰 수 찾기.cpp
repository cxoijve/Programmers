#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer(2); // 가장 큰 수와 그 수의 인덱스를 담을 배열
    int maxIndex = 0; // 최대값의 인덱스 초기화

    // 배열의 첫 번째 원소를 최대값으로 초기 설정
    int maxValue = array[0]; 

    for(int i = 1; i < array.size(); i++) { // 배열을 순회하며 최대값과 인덱스 찾기
        if(array[i] > maxValue) {
            maxValue = array[i];
            maxIndex = i;
        }
    }

    // 결과 벡터에 최대값과 그 인덱스 저장
    answer[0] = maxValue;
    answer[1] = maxIndex;

    return answer;
}
