#include <string>
#include <vector>

using namespace std;

int solution(string s, vector<string> st) {
    int ans = 0;

    for(auto skill : st){
        string fillterd;
        for(int i=0;i<skill.size();i++){
            if(s.find(skill[i]) != string::npos){
                fillterd.push_back(skill[i]);
            }
        }

        if(s == fillterd || fillterd.size()==0) 
            ans+=1;
        else{
            string start_with = s.substr(0, fillterd.size());
            if(start_with == fillterd) ans+=1;
        }   
    }

    return ans;
}
