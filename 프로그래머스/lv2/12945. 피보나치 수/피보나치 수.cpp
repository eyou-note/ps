#include <string>
#include <vector>

using namespace std;


int solution(int n) {
    int  cache[100001]= {0,};
    cache[0] = 0 ;
    cache[1] = 1;

    for(int i=2;i<=n;i++){
        cache[i] = (cache[i-1] + cache[i-2]) % 1234567;
    }


    return cache[n];
}