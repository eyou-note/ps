#include <bits/stdc++.h>

using namespace std;

vector<string> split(string s, char delimiter){
    stringstream ss(s);
    string tmp;
    vector<string> result;

    while(getline(ss,tmp,delimiter)){
        result.push_back(tmp);
    }

    return result;
}


map<string, int> get_terms(vector<string>& terms){
	map<string,int> result;
	for(auto t : terms){
		vector<string> v = split(t, ' ');
		result[v[0]] = stoi(v[1]);
	}
	return result;
}

int get_total_days(int month){
	return (month * 28);
}

vector<string> get_end_date(vector<string> v, int total_days){
	vector<string>  result;
	int year = stoi(v[0]), month = stoi(v[1]), days = stoi(v[2]);

	days += (total_days%28);
	month += (total_days/28) + (days/29);
	year += (month / 13);

	days = (days<=28) ? days : days-28;
	month = (month<=12) ? month : month-12;


	result.push_back(to_string(year));
	
	if(month < 10)
		result.push_back("0"+to_string(month));
	else
		result.push_back(to_string(month));

	if(days < 10)
		result.push_back("0"+to_string(days));
	else
		result.push_back(to_string(days));

	return result;
}



int convertdays(vector<string> date){
	return stoi(date[0])*12*28 + stoi(date[1])*28 + stoi(date[2]);
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> ans;
	map<string,int> terms_map = get_terms(terms); 

	vector<string> today_split = split(today, '.');
	int today_digit = convertdays(today_split);


	for(int i=0;i<privacies.size();i++){
	    vector<string> pieces = split(privacies[i],' ');
		vector<string> start_date = split(pieces[0],'.');

		int enddate = convertdays(start_date) + get_total_days(terms_map[pieces[1]]);

		if(today_digit >= enddate)
			 ans.push_back(i+1);
	}

	
    return ans;
}