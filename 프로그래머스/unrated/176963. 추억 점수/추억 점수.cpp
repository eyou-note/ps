#include <string>
#include <vector>
#include <map>

using namespace std;
vector<int> solution(vector<string> name, vector<int> point, vector<vector<string>> photos) {
    vector<int> ans;
    map<string,int> name_point_map;

    for(int i=0;i<name.size();i++){
        name_point_map[name[i]] = point[i];
    }

    for(auto photo: photos){
        int sum = 0;
        for(auto p : photo){
            map<string,int>::iterator it =  name_point_map.find(p);
            if(it!=name_point_map.end()) sum += it->second;
        }
        
        ans.push_back(sum);
    }
    return ans;
}