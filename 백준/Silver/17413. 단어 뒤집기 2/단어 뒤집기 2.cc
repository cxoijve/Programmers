#include <iostream>
#include <stack>
#include <string>

using namespace std;

// 스택에 저장된 문자들을 역순으로 출력하는 함수
void Print(stack<char>& s) {
    while (!s.empty()) {
        cout << s.top(); // 스택의 맨 위에 있는 문자 출력
        s.pop();         // 스택에서 문자 제거
    }
}

int main() {
    string str;
    getline(cin, str); // 한 줄을 입력받아 문자열에 저장

    bool tag = false; // 태그 내부 여부를 나타내는 변수

    stack<char> s; // 문자를 임시로 저장할 스택

    for (char ch : str) {
        if (ch == '<') {
            Print(s); // 이전에 스택에 저장된 문자들을 역순으로 출력
            tag = true; // 태그 내부에 있음을 나타내는 플래그 설정
            cout << ch; // '<' 출력
        } else if (ch == '>') {
            tag = false; // 태그 외부에 있음을 나타내는 플래그 설정
            cout << ch; // '>' 출력
        } else if (tag) { // 태그 내부의 문자인 경우
            cout << ch; 
        } else { // 태그 외부의 문자인 경우
            if (ch == ' ') { // 공백 문자인 경우
                Print(s); // 이전에 스택에 저장된 문자들을 역순으로 출력
                cout << ch; 
            } else { 
                s.push(ch); 
            }
        }
    }

    // 문자열의 끝까지 탐색한 후에도 스택에 남은 문자가 있는 경우 출력
    Print(s);
    cout << '\n'; 

    return 0;
}
