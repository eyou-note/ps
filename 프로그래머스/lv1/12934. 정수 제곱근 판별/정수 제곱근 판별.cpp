#include <string>
#include <cmath>

using namespace std;


long long solution(long long n) {
    long long ans = 0;
	int end = (int)sqrt(n);

	for(long long i=1;i<=end;i++){
		if(i*i == n){
			ans = (i+1) * (i+1);
		}
	}

    return ans == 0 ? -1: ans;
}