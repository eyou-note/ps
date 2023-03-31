#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <sstream>

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


int get_total_min(vector<string>& parking_info){
    if(parking_info.size()%2!=0) parking_info.push_back("23:59");
    int total = 0;
    for(int i=0;i<parking_info.size();i+=2){
        int start = ((parking_info[i][0]-'0')*10 + (parking_info[i][1]-'0')) * 60
                    + ((parking_info[i][3]-'0')*10 + (parking_info[i][4]-'0'));

        int end = ((parking_info[i+1][0]-'0')*10 + (parking_info[i+1][1]-'0')) * 60
                    + ((parking_info[i+1][3]-'0')*10 + (parking_info[i+1][4]-'0'));

        total += end-start;
    }

    return total;
}

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> ans;
    map<string, vector<string>> parking_info_map;

    for(auto record : records){
        vector<string> record_detail = split(record, ' ');
        parking_info_map[record_detail[1]].push_back(record_detail[0]);
    }

    for(auto car : parking_info_map ){
        int total_min = get_total_min(car.second);  
        int total_fee = fees[1];
        if(total_min > fees[0]){
            total_fee += ceil((double)(total_min-fees[0])/fees[2]) * fees[3] ;
        }

        ans.push_back(total_fee);
    }
    return ans;
}