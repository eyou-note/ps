#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

typedef struct _Problem{
    int easy;
    int hard;
} Problem;

bool cmp(Problem a, Problem b){
    if(a.hard<b.hard) return true;
    if(a.hard==b.hard&&a.easy<b.easy) return true;
    return false;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,l,k,score=0;  cin>>n>>l>>k;
    vector<Problem> p(n);

    for(int i=0;i<n;i++){
        Problem pp;
        cin>>pp.easy>>pp.hard;
        p[i] = pp;
    }

    sort(p.begin(), p.end(),cmp);
    
    for(int i=0;i<n;i++){
        if(k==0) break;
        if(p[i].hard <= l){
            score+=140;
            k--;
        }else if (p[i].easy <= l){
            score+=100;
            k--;
        }
    }
    
    cout<<score;

    return 0;
}