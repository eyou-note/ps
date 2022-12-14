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

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n; 
    string in;
    cin>>n; cin.ignore();
    while(getline(cin,in)){

        vector<string> strs = split(in, ' ');

        for(int i=2;i<strs.size();i++){
            cout<<strs[i]<<' ';
        }
        cout<<strs[0]<<' '<<strs[1]<<endl;
    }

    
    return 0;
}     