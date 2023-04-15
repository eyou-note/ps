#include <bits/stdc++.h>


using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
	if(a.second > b.second) return true;
	return false;
}

bool cmp2(pair<int, int> a, pair<int, int> b){
	if(a.second > b.second) return true;
	else if(a.second == b.second&&a.first < b.first) return true;
	return false;
}


vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> ans;
	map<string, vector<pair<int,int>>> music_info;
	map<string, int> cnt;

	for(int i=0;i<plays.size();i++){
		music_info[genres[i]].push_back({i, plays[i]});
		cnt[genres[i]] += plays[i];
	}


	vector<pair<string, int>> sorted_genres(cnt.begin(), cnt.end());
	sort(sorted_genres.begin(), sorted_genres.end(), cmp);

	for(auto genres: sorted_genres ){
		string key = genres.first;

		vector<pair<int, int>> musics = music_info[key];
		sort(musics.begin(), musics.end(),cmp2);

		for(int i=0;i<min(2, (int)musics.size()); i++){
				ans.push_back(musics[i].first);
		}
		
	}
	

    return ans;
}