#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

string remove_first_zero(string s){
    if(s[0]=='0'){
        int pos = 0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='0') pos+=1;
            else break;
        }   
        return (s.size()==pos+1)?"0":s.substr(pos+1,s.size());
    }else{
        return s;
    }
}

bool cmp(string a, string b){
    if(a.size()<b.size()) return true;
    if(a.size()==b.size()) return a<b;

    return false;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n; cin>>n;
    string in;
    vector<string> strs;

    for(int i=0;i<n;i++){
        cin>>in;
        string tmp;
        for(int j=0;j<in.size();j++){
            if(in[j]>='0' && in[j]<='9'){
                tmp.push_back(in[j]);
            }else if( tmp != "" &&  (in[j]>='a'&&in[j]<='z')){
                strs.push_back( remove_first_zero(tmp));
                tmp="";
            }
        }
        if(tmp!="") strs.push_back( remove_first_zero(tmp) );

    }

    sort(strs.begin(), strs.end(), cmp);

    for(auto s : strs){
        cout<<s<<'\n';
    }
    
    return 0;

}
