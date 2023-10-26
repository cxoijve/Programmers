#include <iostream>
#include <string>

using namespace std;

string solution(string str1, string str2) {
    string result;
    for (int i = 0; i < str1.length(); ++i) {
        result.push_back(str1[i]);
        result.push_back(str2[i]);
    }

    return result;
}


int main() {
    string str1 = "aaaaa";
    string str2 = "bbbbb";
    cout << solution(str1, str2) << endl;
    return 0;
}
