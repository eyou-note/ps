#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int solution(vector<int> a, vector<int> b) {
	int ans = 0, pos = 0;

	sort(a.begin(), a.end(), greater<>());
	sort(b.begin(), b.end(), greater<>());

	for(int i=0;i<a.size();i++){
		if(a[i] < b[pos]){
			pos+=1;
			ans+=1;
		}
	}	


    return ans;
}