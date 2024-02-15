#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int odd_sum = 0;
    int even_sum = 0;
    
    for(int num : num_list){
        if(num % 2 == 0){
            even_sum = even_sum * 10 + num;
        }
        else{
            odd_sum = odd_sum * 10 + num;
        }
    }
    
    answer = odd_sum + even_sum;
    return answer;
}