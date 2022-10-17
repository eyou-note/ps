#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
//    freopen("input.txt", "r", stdin);

    int n,mx=0; cin>>n;
    map<string, int> books;
    string name;
    for(int i=0;i<n;i++){
        cin>>name;
        
        if(books.find(name)==books.end()){
            books[name]=0;
        }else{
            books[name]+=1;
        }
    }

    for(auto b : books){
        mx = max(mx, b.second);
    }

    for(auto b : books){
        if(b.second == mx){
            cout<<b.first;
            break;
        }
    }


    return 0;
}
