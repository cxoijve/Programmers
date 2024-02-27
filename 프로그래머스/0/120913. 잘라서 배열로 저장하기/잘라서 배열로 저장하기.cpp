#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    int len = my_str.length();
    
    for(int i = 0; i < len; i+= n){
        string str = my_str.substr(i, n);
        answer.push_back(str);
    }
    return answer;
}