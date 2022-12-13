#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n; cin>>n;
    if(n%2==0){
        cout<<"I LOVE CBNU";
    }else{
        for(int i=0;i<n;i++)
            cout<<"*";
        cout<<'\n';

        int size = n/2;
        for(int i=0;i<=size;i++){
            for(int j=0;j<n;j++){
                if(size+i<j)break;
                if(size-i == j || size+i == j){
                    cout<<"*";
                }else {
                    cout<<" ";
                }
            }
            cout<<'\n';
        }
    }

    return 0;
}     