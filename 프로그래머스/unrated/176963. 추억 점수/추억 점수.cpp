#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> ans;
	map<string, int> name_map;

	for(int i=0;i<name.size();i++){
		name_map.insert({name[i], yearning[i]});	
	}

	for(auto p : photo){
		int sum = 0;
		for(auto t : p){
			if(name_map.find(t) != name_map.end())
				sum+=name_map.find(t)->second;
		}
		ans.push_back(sum);
	}

    return ans;
}
