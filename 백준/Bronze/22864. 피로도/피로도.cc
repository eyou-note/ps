#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int a,b,c,m,f=0,w=0; 
    cin>>a>>b>>c>>m;

    for(int i=0;i<24;i++){
        if(f+a <= m){       //일 함
            f += a;
            w += b;
        }else{              //쉼
            f = (f-c<0 ? 0 : f-c);
        }
    }

    cout<<w;

    return 0;
}     