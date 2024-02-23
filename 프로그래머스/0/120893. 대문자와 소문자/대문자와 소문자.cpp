#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i = 0; i < my_string.size(); i++){
        if(isupper(my_string[i]))
            answer.push_back(tolower(my_string[i]));
        
        else
            answer.push_back(toupper(my_string[i]));
    }
    
    return answer;
}