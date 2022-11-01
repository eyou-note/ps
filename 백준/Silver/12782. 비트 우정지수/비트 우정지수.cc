#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int t; cin>>t;

    while(t--){
        int cnt=0;
        string n1, n2; 
        cin>>n1>>n2;


        // 교환 가능한것 교환
        for(int i=0;i<n1.size();i++){
            if(n1[i]!=n2[i]){
                for(int j=i+1;j<n1.size();j++){
                    if(n1[i]==n2[j] && n2[i]==n1[j]){
                        cnt+=1;
                        swap(n1[i], n1[j]);
                        break;
                    }
                }

            }
        }
        // 나머지 차이 계산
        for(int i=0;i<n1.size();i++){
            if(n1[i]!=n2[i]) cnt+=1;
        }
        cout<<cnt<<'\n';
    }

    return 0;
}
