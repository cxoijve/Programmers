#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
// 내림차순으로 정렬하기 위해 만든 compare 함수
bool compare(int a, int b)
{
    return a > b;
}
 
vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    
    // 내림차순으로 정렬한 idx를 만들어준다.
    vector<int> idx = emergency;
    
    sort(idx.begin(), idx.end(), compare);  
    
    // 2중 for문을 통해 응급도의 크기 순서대로 정렬
    int len = emergency.size();
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if (emergency[i] == idx[j])
            {
                answer.push_back(j + 1);
                break;
            }
        }
    }
    
    return answer;
}
