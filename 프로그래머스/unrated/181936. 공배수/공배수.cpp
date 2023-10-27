#include <iostream>
#include <string>

using namespace std;

int solution(int number, int n, int m){
    if(number % n == 0 && number % m == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    cout << solution(60,2,3) << endl;
    return 0;
}