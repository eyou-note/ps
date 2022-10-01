#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


typedef struct _Student{
    int country;
    int no;
    int score;
} Student;

bool cmp(Student a, Student b){
    if(a.score>b.score) return true;
    return false;
}

int main(){
    fastio;
 //   freopen("input.txt", "r", stdin);  

    int n,top3=3; cin>>n;
    vector<Student> sv(n);
    unordered_map<int, int> cnt_map;
    for(int i=0;i<n;i++){
        Student s;
        cin>>s.country>>s.no>>s.score;
        sv[i] = s;
        cnt_map[s.country] = 0;
    }

    sort(sv.begin(), sv.end(),cmp);

    for(int i=0;i<n;i++){
        if(top3 == 0) break;
        Student s = sv[i];
        if(cnt_map.find(s.country )->second < 2){
            cout<<s.country<<' '<<s.no<<'\n';
            top3-=1, cnt_map[s.country]+=1;
        }
    }

    return 0;
}

