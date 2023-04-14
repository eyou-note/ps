#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;


int solution(vector<int> tp) {
	if(tp.size()==1) return 0;
    int cnt = 0;
	set<int> me;
	map<int, int> tp_m;
	for(auto t : tp){
		tp_m[t]+=1;
	}

	for(int i=0;i<tp.size();i++){
		me.insert(tp[i]);
		tp_m[ tp[i] ] -= 1;
		if(tp_m[ tp[i] ] == 0 ) tp_m. erase( tp[i] );
		if(me.size() == tp_m.size()) cnt+=1;
	}

    return cnt;	
}