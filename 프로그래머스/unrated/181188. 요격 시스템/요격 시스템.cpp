#include <string>
#include <vector>
#include <algorithm>

using namespace std;


bool cmp (vector<int> a, vector<int>b){
	if(a[1]<b[1]) return true;
	return false;
}

int solution(vector<vector<int>> targets) {
    int ans = 0, mn=-1;

	sort(targets.begin(), targets.end(), cmp);

	for(auto t : targets){
		if(mn <= t[0]){
			ans+=1;
			mn = t[1];
		}
	}
    return ans;
}
