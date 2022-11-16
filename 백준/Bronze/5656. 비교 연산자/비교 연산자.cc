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
//    freopen("input.txt", "r", stdin);  
    
    string str;
    int cnt=1;
    while(getline(cin, str)){

        vector<string> v = split(str,' ');
        if(v[1]=="E") break;
        
        int a = stoi(v[0]), b = stoi(v[2]);
        bool result;

        if(v[1] == ">"){
            result = a>b;
        }else if(v[1] == ">="){
            result = a>=b;
        }else if(v[1] == "<"){
            result = a<b;
        }else if(v[1] == "<="){
            result = a<=b;
        }else if(v[1] == "=="){
            result = a==b;
        }else {
            result = a!=b;
        }

        cout<<"Case "<<cnt++<<": "<<(result?"true":"false")<<endl;
    }


    return 0;

}