#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int t,n; cin>>t;
    while(t--){
        string N;
        cin>>N;
        
        string median = N;
        median[0] = '5';
        for(int j=1; j<median.length(); j++)
            median[j]='0';
        
        if(stol(N)>stol(median)){
            string temp = median;
            for(int j=0; j<median.length(); j++){
                temp[j]=57-median[j]+48;
            }
            cout<<stol(median)*stol(temp)<<endl;
        }else{
            string temp = N;
            for(int j=0; j<N.length(); j++){
                temp[j]=57-N[j]+48;
            }
            cout<<stol(N)*stol(temp)<<endl;
        }
    }
    return 0;
}
