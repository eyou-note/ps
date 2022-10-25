#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int diff_str(string s1, string s2){
    int result = 0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]) result+=1;
    }

    return result;
}
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int t,n; cin>>t;
    string s1, s2;
    while(t--){
        cin>>n>>s1>>s2;
        int diff = diff_str(s1, s2), wb_cnt=0, bw_cnt=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='W'&&s2[i]=='B') wb_cnt +=1;
            else if(s1[i]=='B'&&s2[i]=='W') bw_cnt +=1;
        }
        cout<<min(diff, diff-(min(wb_cnt, bw_cnt)))<<'\n';
    }

    return 0;
}
