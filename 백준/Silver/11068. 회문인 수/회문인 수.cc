#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


vector<int> convert(int i, int n){
    vector<int>result;
    while(n!=0){
        result.push_back( n%i );
        n/=i;
    }   
    return result;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int t,n; cin>>t;

    while(t--){

        cin>>n;

        bool palindrome ;

        for(int i=2;i<=64;i++){
            palindrome = true;
            
            vector<int> result = convert(i, n);

            int j=0, k=result.size()-1;
            while(j<=k){
                if(result[j++]!=result[k--]){
                    palindrome = false;
                    break;
                }
            }

            if(palindrome) break;
        }
        cout<<(palindrome?1:0)<<'\n';
    }

    return 0;
}

