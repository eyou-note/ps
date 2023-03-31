#include <string>
#include <vector>
#include <map>

using namespace std;

void init(map<string, int>& dic){
    string key;
    for(int i=0;i<26;i++){
        key = 'A'+i;
        dic[key] = i+1;
    }
}

vector<int> solution(string msg) {
    vector<int> ans;
    map<string, int> dic;
    
    init(dic);

    int inc = dic.size()+1;

    for(int i=0;i<msg.size();i++){
        string str(1, msg[i]),next;
        int pos=1, result;
        //다음거랑 합한 next 가 맵에 있는지 확인
        while(1){
            next = str + msg[i+pos];
            if(dic.find(next) == dic.end()){
                dic[next] = inc++;
                break;
            }
            str = next;
            pos+=1;
        }
        if(pos!=1) i+=pos-1;
        ans.push_back( dic.find(str)->second );
        
    }

    return ans;
}