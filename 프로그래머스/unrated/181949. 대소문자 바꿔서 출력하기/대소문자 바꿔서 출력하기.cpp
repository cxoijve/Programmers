#include <iostream>
#include <string>
#include <cctype>  // isupper, islower, toupper, tolower 함수 사용을 위해

using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]); // 대문자를 소문자로 변환
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]); // 소문자를 대문자로 변환
        }
    }

    cout << str << endl;

    return 0;
}
