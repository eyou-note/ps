#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int cnt = 0, end = 0;

	for(int i=0;i<section.size();i++){
		if(end<=section[i]){
			end = section[i] + m;
			cnt+=1;
		}
	}

    return cnt;
}