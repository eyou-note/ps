#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
 //   freopen("input.txt", "r", stdin);  

    string s; cin>>s;

    int loop = (s.size()/10)+1; 
    for(int i=0;i<loop;i++){
        int st = i*10;
        int ed = min((i+1)*10, (int)s.size());

        for(int j=st;j<ed;j++){
            cout<<s[j];
        }
        cout<<endl;
    }

    return 0;
}