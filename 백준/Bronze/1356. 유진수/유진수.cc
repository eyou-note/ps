#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int mul(string s){
    int result = 1;
    for(int i=0;i<s.size();i++){
        result *= s[i]-'0';
    }   
    return result;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    string s;
    int found = 0;
    cin>>s;

    for(int i=0;i<s.size()-1;i++){
        string s1 = s.substr(0,i+1);
        string s2 = s.substr(i+1, s.size());

        if(mul(s1) == mul(s2)){
           found = true;
           break;
        }
    }

    if(found)
        cout<<"YES\n";
    else  
        cout<<"NO\n";

    return 0;
}