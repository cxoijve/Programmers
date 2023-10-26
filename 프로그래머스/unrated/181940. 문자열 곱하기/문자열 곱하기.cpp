#include <iostream>
#include <string>
using namespace std;

string solution(string my_string, int k) {
    string result = "";
    for(int i = 0; i < k; i++) {
        result += my_string;
    }
    return result;
}

int main() {
    string my_string1 = "string";
    int k1 = 3;
    cout << solution(my_string1, k1) << endl;  // 출력: "stringstringstring"

    string my_string2 = "love";
    int k2 = 10;
    cout << solution(my_string2, k2) << endl;  // 출력: "lovelovelovelovelovelovelovelovelovelove"

    return 0;
}
