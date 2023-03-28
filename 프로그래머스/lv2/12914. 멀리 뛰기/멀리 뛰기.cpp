#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long cache[2001] = {0,};

    cache[1] = 1, cache[2] = 2;
    for(int i=3;i<=n;i++){
            cache[i] = (cache[i-2] + cache[i-1]) % 1234567;
    }
    return cache[n];
}