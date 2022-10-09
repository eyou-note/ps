#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);

    int n,m,book,acc=0,box=0; cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>book;
        if(book+acc<=m){
            acc+=book;
        }else{
            box+=1;
            acc=book;
        }
    }

    if(acc) box+=1;

    cout<<box;

    return 0;
}

