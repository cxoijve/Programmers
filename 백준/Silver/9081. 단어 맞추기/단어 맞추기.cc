#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int T;
    cin >> T;
    
    while(T--){
        string word;
        cin >> word;
        
        if(!next_permutation(word.begin(), word.end())){
            prev_permutation(word.begin(), word.end());
        }
        for(auto it : word) cout << it;
        cout << "\n";
    }
}