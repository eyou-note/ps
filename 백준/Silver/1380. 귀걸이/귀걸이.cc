#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int t, no=1; 
    while(1){
        cin>>t; cin.ignore();
        if(t==0) break;
        string n;
        int idx; char flag;
        vector<string> names(t+1);
        vector<bool> chk(t+1, false);
        
        for(int i=1;i<=t;i++){
            getline(cin,n);
            names[i] = n;
        }

        for(int i=0;i<2*t-1;i++){
            cin>>idx>>flag;
            chk[idx] = chk[idx] ? false : true;
        }
        for(int i=1;i<=t;i++){
            if(chk[i]) cout<<(no++)<<' '<<names[i]<<'\n';
        }
        
    }



    return 0;
}
