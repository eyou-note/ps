#include <bits/stdc++.h>


using namespace std;
typedef struct _Work{
    string name;
    int start;
    int end;
    int cost;
} Work;

pair<int, int> get_start_end_time(string start, string cost){
    int st = ((start[0]-'0')*10 + (start[1]-'0')) * 60 + ((start[3]-'0')*10 + (start[4]-'0')),
        ed = st + stoi(cost);
    return {st,ed};
}

bool cmp (Work a, Work b){
    if(a.start < b.start) return true;
    return false;
}

vector<string> solution(vector<vector<string>> plans) {
    vector<string> done;
    vector<Work> works(plans.size());
    stack<Work> remain;
    int LAST_WORK = plans.size()-1;

    for(int i=0;i<plans.size();i++){
        pair<int, int> start_end = get_start_end_time(plans[i][1], plans[i][2]);
        works[i] = {plans[i][0], start_end.first, start_end.second, stoi(plans[i][2])};
    }

    sort(works.begin(), works.end(), cmp);

    for(int i=0;i<works.size();i++){
        if(i==LAST_WORK){
            done.push_back(works[i].name);
            break;
        }   

        Work cur = works[i], next = works[i+1];

        if(cur.end > next.start){
            cur.cost -= (next.start - cur.start);
            remain.push(cur);

        }else{
            done.push_back(cur.name);

            int ext_time = next.start - cur.end;

            //새로운 과제를 하기엔 시간이 남으면 남은 과제 수행
            while(!remain.empty() && ext_time > 0){
                if(remain.top().cost <= ext_time){
                    ext_time -= remain.top().cost;
                    done.push_back(remain.top().name);
                    remain.pop();
                }else{
                    remain.top().cost -= ext_time;
                    break;
                }
            }
        }
    }

    while(!remain.empty()){
        done.push_back(remain.top().name);
        remain.pop();
    }

    return done;
}