#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int Oddsum = 0, Evensum = 0;
    for (int i = 0; i < num_list.size(); i++)
    {
        if (i % 2)
            Oddsum += num_list[i];
        else
            Evensum += num_list[i];
    }
    answer = max(Oddsum, Evensum);
    return answer;
}