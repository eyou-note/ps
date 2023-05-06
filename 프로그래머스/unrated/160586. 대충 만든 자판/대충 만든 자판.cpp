#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
	map<char, int> key_info;

	for(auto key : keymap){
		for(int i=0;i<key.size();i++){
			if(key_info.find(key[i]) == key_info.end()){
				key_info.insert({key[i], i+1});
			}else{
				if(key_info[key[i]] > i+1)
					key_info[key[i]] = i+1;
			}
		}
	}

	for(auto t : targets){
		int sum = 0, found = 1;
		for(int i=0;i<t.size();i++){
			if(key_info.find(t[i]) == key_info.end()){
				sum = -1, found = 0;
				break;
			}
			sum += key_info[t[i]];
		}

		answer.push_back(sum);
	
	}
    return answer;
}
