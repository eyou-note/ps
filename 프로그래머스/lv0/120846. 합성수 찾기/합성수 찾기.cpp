#include <string>
#include <vector>

using namespace std;

int get_divisor_cnt(int n){
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(n%i == 0) cnt+=1;
    }
    return cnt;
}


int solution(int n) {
    int answer = 0;
    for(int i=1;i<=n;i++){
        if(get_divisor_cnt(i) >= 3)
            answer+=1;
    }
    return answer;
}
