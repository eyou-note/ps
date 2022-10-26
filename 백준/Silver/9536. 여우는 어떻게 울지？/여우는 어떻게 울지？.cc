#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

typedef struct _Sound{
    string s;
    bool is_fox;
}Sound;

vector<string> split(string s, char delimiter){
    stringstream ss(s);
    string tmp;
    vector<string> result;

    while(getline(ss,tmp,delimiter)){
        result.push_back(tmp);
    }
    return result;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin); 

    int t; 
    cin>>t; cin.ignore();
    string in;

    while(t--){
        getline(cin,in);
        vector<Sound> sv;   
        vector<string> sounds = split(in,' ');

        for(int i=0;i<sounds.size();i++){
            Sound s = {sounds[i], true};
            sv.push_back(s);
        }
        
        while(getline(cin,in)){
            if(in=="what does the fox say?"){
                for(auto s : sv){
                    if(s.is_fox){
                        cout<<s.s<<' ';
                    }
                }
                cout<<'\n';
                break;
            }
            
            vector<string> target = split(in,' ');

            for(int i=0;i<sv.size();i++){
                if(sv[i].s == target[2]){
                    sv[i].is_fox = false;
                }
            }
        }
    }

    return 0;
}
