#include <string>
#include <vector>
#include <cmath>

using namespace std;
bool is_prime(int n){
    int end = (int) sqrt(n);
    for(int i=2;i<=end;i++){
        if(n%i==0) return false;
    }
    
    return true;
}

int solution(int n) {
    int cnt = 0;
    for(int i=2;i<=n;i++){
        if(is_prime(i)) {
            cnt+=1;
        }
    }

    return cnt;
}
