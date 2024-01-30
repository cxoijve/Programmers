#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        string word;
        cin >> word;
		
        // 다음 순열이 없다면 이전 순열로 돌아옴
        if(!next_permutation(word.begin(),word.end())){
            prev_permutation(word.begin(),word.end());
        }
        for(auto it : word) cout << it;
        cout << "\n";
    }
}