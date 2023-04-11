#include <bits/stdc++.h>


using namespace std;
int solution(int x, int y, int n) {
	int cache[1000001]={0,};
		
	for(int i=x;i<=y;i++){
		if(i!=x  && cache[i] == 0){
			 cache[i] = -1;
			 continue;
		}

		if(i*2 <= y){
			cache[i * 2] = (cache[i * 2] == 0) ? cache[i] + 1 : min(cache[i] + 1, cache[i * 2]);
		}

		if(i*3 <= y){
			cache[i * 3] = (cache[i * 3] == 0) ? cache[i] + 1 : min(cache[i] + 1, cache[i * 3]);
		}

		if(i+n <= y){
			cache[i + n] = (cache[i + n] == 0) ? cache[i] + 1 : min(cache[i] + 1, cache[i + n]);
		}
		
	}

	return cache[y];
}

