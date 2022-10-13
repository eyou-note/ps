#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    int n, c=1; 
    string s;
    cin>>n; cin.ignore();
    while(n--){

        getline(cin,s);
        int mn=0x7fffffff, cnt[26]={0,};

        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                cnt[ s[i]-'A' ] += 1;
            }else if(s[i]>='a'&&s[i]<='z'){
                cnt[ s[i]-'a' ] += 1;
            }
        }
        for(int i=0;i<26;i++){
            mn = min(mn,cnt[i]);
        }

        cout<<"Case "<<c++<<": ";
        if(mn==0){
            cout<<"Not a pangram\n";
        }else if(mn==1){
            cout<<"Pangram!\n";
        }else if(mn==2){
            cout<<"Double pangram!!\n";
        }else{
            cout<<"Triple pangram!!!\n";
        }
    }

    return 0;
}
