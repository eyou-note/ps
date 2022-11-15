#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    string str;

    while(getline(cin, str)){
        if(str=="*") break;
        int cnt[26]={0,};
        bool is_pangram = true;
        for(int i=0;i<str.size();i++){
            if(str[i]==' ') continue;
            cnt[ str[i] -'a' ] = 1;
        }

        for(int i=0;i<26;i++){
            if(cnt[i]==0){
                is_pangram = false;
                break;
            }
        }
        cout<<(is_pangram?"Y":"N")<<endl;
    }


    return 0;
}