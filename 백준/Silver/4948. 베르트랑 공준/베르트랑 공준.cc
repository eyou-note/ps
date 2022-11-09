#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"
#define MAX 2469123

using namespace std;

int nums[MAX];

void init_prime_number(){
    for(int i=2;i<=MAX;i++){
        nums[i] = 1;
    }
    for(int i=2;i<=MAX;i++){
        if(nums[i]==0) continue;

        for(int j=i+i;j<=MAX;j+=i){
            nums[j] = 0;
        }
    }
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  
    int n;
    
    init_prime_number();

    while(cin>>n){
        if(n==0) break;
        
        int cnt=0;
        for(int i=n+1;i<=2*n;i++){
            if(nums[i] == 1) cnt+=1;
            
        }
        cout<<cnt<<'\n';
    }


    return 0;
}