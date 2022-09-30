#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
//    freopen("input.txt", "r", stdin);  

    int t; cin>>t;
    string n;
    
    while(t--){
        cin>>n;
        
        int cnt=0;
        while(n!="6174"){
            vector<char> v(4);
            
            for(int i=0;i<4;i++){
                if(i>=n.size()){
                    v[i]='0';
                }else{
                    v[i]=n[i];
                }
            }
            
            sort(v.begin(), v.end());

            int a = (v[0]-'0')*1000 + (v[1]-'0')*100 + (v[2]-'0')*10+ (v[3]-'0'),
                b = (v[3]-'0')*1000 + (v[2]-'0')*100 + (v[1]-'0')*10+ (v[0]-'0');

            n = to_string(b-a);

            cnt+=1;
            
        }
        cout<<cnt<<'\n';

    }


    return 0;
}

