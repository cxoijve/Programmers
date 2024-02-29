#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer=0;
    int cnt=1, m=1;
    
    while(1){
        bool check=false;
        string s=to_string(m);
        
        // 3의 배수 확인
        if(m%3==0){
            m+=1;
            continue;
        }
        
        // 3이 있는지 확인
        else{
            for(int i=0; i<s.size(); i++){
                if(s[i]=='3'){
                    m+=1;
                    check=true;
                    break;
                }
            }
        }
        
        // 3이 있으면 스킵
        if(check) continue;
        
        // n과 값이 같으면 탈출
        if(cnt==n) break;
        
        cnt++;
        m++;
    }
    
    return m;
}