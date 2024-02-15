#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;

    int price = (n * 12000) + (k * 2000);
    int service = (n / 10) * 2000;    
    
    answer = price - service;
    return answer;
}