#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool multiple_of_3(string s){
    int result = 0;
    for(int i=0;i<s.size();i++){
        result+=s[i]-'0';
    }
    return result%3==0;
}
bool cmp(char a, char b){
    return a>b;
}
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);
    
    string s; cin>>s;
    sort(s.begin(), s.end(), cmp);

    if((multiple_of_3(s) && s[s.size()-1] == '0')){
        cout<<s;
    }else{
        cout<<-1;
    }
    
    return 0;
}
