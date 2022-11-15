#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    string str;
    map<char, int> m;
    m.insert({'-',0}), m.insert({'\\',1}),m.insert({'(',2});
    m.insert({'@',3}), m.insert({'?',4}),m.insert({'>',5});
    m.insert({'&',6}), m.insert({'%',7}),m.insert({'/',-1});

    while(getline(cin, str)){
        if(str=="#") break;
        int d=1, sum=0;

        for(int i=str.size()-1;i>=0;i--){
            sum += m[str[i]] * d;
            d*=8;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}