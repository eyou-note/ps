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
   // freopen("input.txt", "r", stdin);  

    int n; 
    string in;
    set<char> s;

    cin>>n; cin.ignore();
    getline(cin, in);

    vector<string> words = split(in,' ');

    for(auto w : words){
        s.insert(w[0]);
    }

    cout<<(s.size() == 1 ? 1 : 0);

    return 0;
}     