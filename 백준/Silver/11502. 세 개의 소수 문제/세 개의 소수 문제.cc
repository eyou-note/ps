#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int p[1001];

void init_prime_nums(){
    for(int i=2;i<=1000;i++){
        p[i] = i;
    }
    for(int i=2;i<=1000;i++){
        if(p[i]==0) continue; //지워졌으면 통과
        for(int j=i+i;j<=1000;j+=i){    // i 제외, i 배수들을 지움
            p[j] = 0;
        }
    }
}
int main(){
    fastio;
   // freopen("input.txt", "r", stdin); 
    
    //p를 1000 이하 소수로 채움
    //입력받은 k보다 작은 p을 가지고 더했을때 k를 만들수 있는지 판단.
    int t,k;
    cin>>t;
    init_prime_nums();
    while(t--){
        cin>>k; 
        bool found = false;
        for(int i=2;i<k;i++){
            for(int j=2;j<k;j++){
                for(int l=2;l<k;l++){
                    if(p[i]==0 || p[j]==0 || p[l]==0) continue;
                    if(p[i]+p[j]+p[l] == k) {
                        cout<<p[i]<<' '<<p[j]<<' '<<p[l]<<'\n';
                        found = true;
                        break;
                    }
                }
                if(found) break;
            }
            if(found) break;
        }
        if(!found) cout<<0<<'\n';
    }
    return 0;
}
