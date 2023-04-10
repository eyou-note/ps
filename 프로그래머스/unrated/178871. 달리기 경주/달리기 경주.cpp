#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> ans;

    map<string, int> players_name_map;
    map<int, string> players_grade_map;
    for(int i=0;i<players.size();i++){
        players_name_map[players[i]] = i;
        players_grade_map[i] = players[i];
    }

    for(auto me : callings){
        int my_grade = players_name_map[me];
        string you = players_grade_map[my_grade-1];

        players_name_map[me] = my_grade-1;
        players_name_map[you] = my_grade;

        players_grade_map[my_grade] = you;
        players_grade_map[my_grade-1] = me;
    }

    for(auto grade : players_grade_map){
        ans.push_back(grade.second);
    }

    return ans;
}