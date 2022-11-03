#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


bool is_prime_number(long long n){
    if(n==0||n==1) return false; 
    int end = (int)sqrt(n);
    for(int i=2;i<=end;i++){
        if(n%i==0) return false;
    }

    return true;
}

int main(){
    fastio;
 //   freopen("input.txt", "r", stdin);  

    int t; cin>>t;
    long long n;
    while(t--){
        cin>>n;

        while(!is_prime_number(n)){
            n+=1;
        }
        cout<<n<<'\n';

    }    


    return 0;
}
