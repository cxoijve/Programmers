#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    long long answer = 1;
    
    if (n % 2 == 1) {
        return 0;
    }
    else {
        long long n_1 = 1;
        long long tmp;
        
        for (int i = 2; i <= n; i += 2) {
            tmp = answer;
            answer = ((answer * 4) % 1000000007 - n_1 % 1000000007 + 1000000007) % 1000000007;
            n_1 = tmp;
        }
    }
    
    return answer;
}