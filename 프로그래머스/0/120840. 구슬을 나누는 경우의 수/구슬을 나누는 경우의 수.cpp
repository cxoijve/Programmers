#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    long answer = 1;
    int a = (balls - share < share) ? balls - share : share;
    
    for(int i = 0; i < a; i++) {
        answer *= (balls - i); //분자
        answer /= (i + 1); //분
    }
    
    return answer;
}