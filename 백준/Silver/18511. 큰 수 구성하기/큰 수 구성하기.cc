#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int n,k,ans;
string s, result; 

void permutation(vector<int>& v){
    if(!result.empty()&&stoi(result) <= n){
        ans = max(ans, stoi(result));
    }

    if(result.size() == s.size()){ // 다 만들었으면 재귀 탈출
        return ;
    }

    for(int i=0;i<k;i++){
        result += to_string(v[i]);  // 하나씩 꺼내서 만들어봄
        permutation(v);
        result.pop_back();
    }

}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    cin>>s>>k;
    n = stoi(s);

    vector<int> v(k);
    for(int i=0;i<k;i++){
        cin>>v[i];
    }

    permutation(v);

    cout<<ans;

    return 0;

}

