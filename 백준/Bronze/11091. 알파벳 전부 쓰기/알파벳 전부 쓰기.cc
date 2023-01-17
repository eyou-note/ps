#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n;
    string str;
    cin>>n; cin.ignore();

    while(n--){
        getline(cin, str);

        int alp[26] = {0,};
        bool is_pangram = true;
        string missing_str;
        for(int i=0;i<str.size();i++){
            if(str[i]>='a' && str[i]<='z'){
                alp[str[i]-'a'] += 1;
            }else if(str[i]>='A' && str[i]<='Z'){
                alp[str[i]-'A'] += 1;
            }
        }

        for(int i=0;i<26;i++){
            if(alp[i] == 0){
                missing_str.push_back('a'+i);
                is_pangram = false;
            }
        }

        if(is_pangram) cout<<"pangram"<<endl;
        else {
            cout<<"missing "<< missing_str<<endl;
        }
    }

    return 0;
}     