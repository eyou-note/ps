#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    int n,m,g,num; cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cin>>m;
    
    while(m--){
        cin>>g>>num;
        if(g==1){    // 남자
            
            for(int i=num;i<=n;i+=num){
                a[i] = a[i]==0 ? 1 : 0;
            }

        }else{ // 여자
          
            for(int i=1; a[num+i] == a[num-i]; i++){
                if(num+i>n || num-i<1) break;
                
                a[num+i] = a[num+i]==0 ? 1 : 0;
                a[num-i] = a[num-i]==0 ? 1 : 0;

            }

            a[num] = a[num]==0 ? 1 : 0;
        }
    }

    if(n>20){
        int loop = n / 20, i, idx=1;
        while(loop--){
            for(i=idx;i<idx+20;i++){
                cout<<a[i]<<' ';
            }    
            cout<<'\n';
            idx += 20;
        }
        
        for(int j=0;j<n%20;j++){
            cout<<a[idx++]<<' ';
        }
    }else{
        for(int i=1;i<=n;i++){
            cout<<a[i]<<' ';
        }   
    }

    return 0;

}
