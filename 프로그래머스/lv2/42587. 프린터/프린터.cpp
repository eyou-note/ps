#include <string>
#include <vector>
#include <deque>

using namespace std;

typedef struct _Print{
    int no;
    int priority;
} Print;

int solution(vector<int> priorities, int l) {
    int print_cnt = 0;
    deque<Print> papers(priorities.size());
    for(int i=0;i<priorities.size();i++){
        papers[i] = {i, priorities[i]};
    }

    while(!papers.empty()){
        Print p = papers.front();
        bool found = false;

        for(auto t : papers){
            if(p.no == t.no && p.priority == t.priority) continue;

            if(p.priority < t.priority){
                found = true; 
                break;
            }
        }
        if(found){
            papers.push_back(p);
        }else{
            print_cnt += 1;
            if(p.no == l) break;
        }
        papers.pop_front();
    }

    return print_cnt;
}