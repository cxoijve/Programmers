#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {

    //1. phone_book 배열을 정렬한다
    sort(phone_book.begin(), phone_book.end());
    //2. 1중 loop를 돌면서 앞 번호가 뒷번호의 접두어인지 확인한다
    for (int i = 0; i < phone_book.size() - 1; i++) {
        if (phone_book[i + 1].find(phone_book[i]) == 0)
            return false;
    }

    return true;
}

int main(void)
{
    vector<string> phone_book = { "119", "97674223", "1195524421" };
    cout << solution(phone_book);
}