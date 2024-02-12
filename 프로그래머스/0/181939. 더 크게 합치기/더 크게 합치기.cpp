#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string num1 = to_string(a);
    string num2 = to_string(b);
    string result1 = num1 + num2;
    string result2 = num2 + num1;
    if(atoi(result1.c_str()) > atoi(result2.c_str()))
        return atoi(result1.c_str());
       
    return atoi(result2.c_str());
}