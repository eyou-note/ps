#include <bits/stdc++.h>


using namespace std;

typedef struct _Music{
	string name;
	string sound;
	int running_time;
	int order;
}Music;

bool cmp(Music a, Music b){
	if(a.running_time>b.running_time) return true;
	if(a.running_time==b.running_time  && a.order < b.order ) return true;


	return false;
}
vector<string> split(string s, char delimiter){
    stringstream ss(s);
    string tmp;
    vector<string> result;

    while(getline(ss,tmp,delimiter)){
        result.push_back(tmp);
    }
    return result;
}


string convert_sound(string sound){
	string result = sound;
	map<string, string> targets;
	targets["C#"] = "H", targets["D#"] = "I", targets["F#"] = "J";
	targets["G#"] = "K", targets["A#"] = "L";
 	int tmp;
	for(auto t : targets){
		while ((tmp = result.find(t.first)) != string::npos){
			result.replace(tmp, t.first.size(), t.second);
		}
	}

	return result;
}

int get_running_time(string start, string end){
	int result = 0;
	int start_time = ((start[0]-'0')*10 + (start[1]-'0'))*60
								+ ((start[3]-'0')*10 + (start[4]-'0')),
		end_time = ((end[0]-'0')*10 + (end[1]-'0'))*60
								+ ((end[3]-'0')*10 + (end[4]-'0'));



	return end_time-start_time;
}
string solution(string m, vector<string> musicinfos) {
	m = convert_sound(m);
    string ans = "";
	vector<Music> ms, find;
	for(int i = 0; i<musicinfos.size();i++){
		vector<string> result = split(musicinfos[i], ',');
		int running_time = get_running_time(result[0], result[1]);
		string sound  = convert_sound(result[3]);
		
		if(running_time > sound.size()){
			int pos = 0;
			while(sound.size() != running_time){
				sound.push_back(sound[pos%sound.size()]);
				pos++;
			}
		}else{
			sound = sound.substr(0, running_time);
		}

		ms.push_back({result[2], sound, running_time,i});
	}

	// 먼저 찾으면 장땡 아닌가
	for(auto music : ms){
		if(music.sound.find(m) != string::npos){
			find.push_back(music);
		}
	}
	
	sort(find.begin(), find.end(),cmp);
    ans = find.size() == 0 ? "(None)": find[0].name;

    return ans;
}
