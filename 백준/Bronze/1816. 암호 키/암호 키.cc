#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

typedef unsigned long long ull;
int check[1000001];
vector <int> prime_nums;

void get_prime_nums(){
    for(int i=2;i<=1000000;i++){
        check[i] = i;
    }
    for(int i = 2; i <= 1000000; i++){
        if(check[i]==0) continue;
        for(int j=i+i;j<=1000000;j+=i){
            check[j]=0;
        }
    }
    for(int i = 2; i <= 1000000; i++){
        if(check[i]!=0) prime_nums.push_back(i);
    }
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n; cin>>n;
    ull in;
    get_prime_nums();

    while(n--){
        cin>>in;
        bool yes = true;
        for(int i=0;i<prime_nums.size();i++){
            if(in%prime_nums[i] == 0) {
                yes = false;
                break;
            }
        }
        
        cout<<(yes?"YES":"NO")<<'\n';
    }
    
    return 0;
}

