#include <string>
#include <vector>
#include <math.h>

using namespace std;


int get_cnt(int n){
    int result=0;
    for(int i=1;i<=n;i++){
        if(n%i == 0) 
            result+=1;
    }
    return result;
}

int solution(int left, int right) {
    int ans = 0;

    for(int i=left;i<=right;i++){
        if(get_cnt(i) % 2 == 0){
            ans += i; 
        }else{
            ans -= i;
        }
    }
    return ans;
}