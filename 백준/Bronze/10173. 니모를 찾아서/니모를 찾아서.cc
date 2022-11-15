#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

vector<string> split(string s, char delimiter){
    stringstream ss(s);
    string tmp;
    vector<string> result;

    while(getline(ss,tmp,delimiter)){
        result.push_back(tmp);
    }

    return result;
}

string to_lower(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i] += 32;
        }
    }
    return s;
}


int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    string str;
    while(getline(cin, str)){
        if(str == "EOI") break;

        bool found = false;
        vector<string> sv = split(str,' ');
        for(auto s : sv){
            if(to_lower(s).find("nemo")!=string::npos){
                found = true;
                break;
            }
        }
        if(found) cout<<"Found"<<endl;
        else cout<<"Missing"<<endl;

    }

    return 0;
}