#include <string>
#include <map>

using namespace std;

map<char, int> mp;

string solution(string my_string) {
    string answer = "";
    
    for(int i=0; i<my_string.size(); i++){
        if(mp[my_string[i]]==0)
            mp[my_string[i]]=1, answer+=my_string[i];
    }
    
    return answer;
}