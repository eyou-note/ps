#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


vector<int> split(string s, char delimiter){
    stringstream ss(s);
    string tmp;
    vector<int> result;

    while(getline(ss,tmp,delimiter)){
        result.push_back(stoi(tmp));
    }

    return result;
}

int gcd(int a, int b){
    a = abs(a), b = abs(b);
    while(b!=0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int t; 
    cin>>t; cin.ignore();
    string in;

    while(t--){ 
        getline(cin,in);
        int mx = 0;
        vector<int> v = split(in,' ');

        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                mx = max(mx, gcd(v[i], v[j]));
            }
        }
        cout<<mx<<'\n';

    }

    return 0;
}
